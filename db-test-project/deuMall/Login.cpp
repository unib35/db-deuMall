#define _CRT_SECURE_NO_WARNINGS

#include "screenControl.h"
#include "MainMenu.h"
#include "Login.h"

using namespace std;

void Login::printSrc()
{
	clrscr();
	print_screen("./screen/login_screen.txt");
	
	char input_id[20];
	char input_pw[20];
	MembersDto memberDto;
	MainMenu mainMenu;
	
	gotoxy(35, 8);
	gets_s(input_id); //ID �Է�

	gotoxy(35, 10);
	gets_s(input_pw); //PW �Է�

	gotoxy(35, LOGIN);

	int cursor = cursorControl(x, y, y_end, gap);

	switch (cursor) {
		case LOGIN:
			copy_struct(&memberDto, select_MemberId(input_id));
			if (strcmp(memberDto.member_id, "") == 0) {
				gotoxy(25, 14);
				printf("��ġ�ϴ� ID�� �����ϴ�.");
			}
			else {
				printf("�α��μ���. %s �� �ݰ����ϴ�.", memberDto.member_id);
			}
			break;
		case CANCEL:
			clrscr();
			mainMenu.printSrc();
			break;
	}		
	
}