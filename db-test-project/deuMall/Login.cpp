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
	gets_s(input_id); //ID 입력

	gotoxy(35, 10);
	gets_s(input_pw); //PW 입력

	gotoxy(35, LOGIN);

	int cursor = cursorControl(x, y, y_end, gap);

	switch (cursor) {
		case LOGIN:
			copy_struct(&memberDto, select_MemberId(input_id));
			if (strcmp(memberDto.member_id, "") == 0) {
				gotoxy(25, 14);
				printf("일치하는 ID가 없습니다.");
			}
			else {
				printf("로그인성공. %s 님 반갑습니다.", memberDto.member_id);
			}
			break;
		case CANCEL:
			clrscr();
			mainMenu.printSrc();
			break;
	}		
	
}