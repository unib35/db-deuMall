#include < windows.h >
#include <conio.h>

void gotoxy(int x, int y);
void getxy(int* x, int* y);
void clrscr(void);

#define DOWN_KEY 80
#define UP_KEY 72
#define ENTER_KEY 13

#define getch() _getch()

int cursorControl(int x, int startPoint, int endPoint, int gap) {
	int current = startPoint;
	int inputKey;
	gotoxy(x, current);
	while (1) {
		_getch();
		inputKey = _getch();
		switch (inputKey) {
		case ENTER_KEY :
			return current;
		case DOWN_KEY: //�Ʒ� ����Ű �Է� ��
			if (current + gap <= endPoint) {
				current += gap;
			}
			break;
		case UP_KEY: //�� ����Ű �Է� ��
			if (current - gap >= startPoint) {
				current -= gap;
			}
			break;
		default:
			return 99; //�߸��� �Է��� ��� 99 ��ȯ.
		}
		gotoxy(x, current);
	}
}

/*---------------  ȭ�� Ŀ�� ���� �Լ� --------------------*/
#define STD_HANDLE GetStdHandle(STD_OUTPUT_HANDLE)

void gotoxy(int x, int y)
{
	COORD Cur = { (SHORT)x, (SHORT)y };

	SetConsoleCursorPosition(STD_HANDLE, Cur);
}

void getxy(int* x, int* y)
{
	CONSOLE_SCREEN_BUFFER_INFO Buf;

	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Buf);
	*x = (int)Buf.dwCursorPosition.X;
	*y = (int)Buf.dwCursorPosition.Y;

}

void clrscr(void)
{
	COORD Cur = { 0, 0 };
	unsigned long dwLen;

	FillConsoleOutputCharacter(STD_HANDLE, ' ', 80 * 25, Cur, &dwLen);
}
/*---------------------------------------------------------*/