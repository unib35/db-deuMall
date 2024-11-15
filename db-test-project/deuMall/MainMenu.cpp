#define _CRT_SECURE_NO_WARNINGS

#include "screenControl.h"
#include "MainMenu.h"
#include "Login.h"


using namespace std;


void MainMenu::printSrc()
{
	clrscr();

	print_screen("./screen/mainMenu_screen.txt");

	Login login;

	int cursor = cursorControl(x, y, y_end, gap);
	if (cursor == LOGIN) {
		PlaySound(TEXT("./sound/enter.wav"), NULL, SND_ASYNC);
		clrscr();
		login.printSrc();
	} 
	
	
}



