#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

#include "mainMenu.h"

#define getch() _getch()

int main()
{
	_putenv("NLS_LANG=American_America.KO16KSC5601"); //한글사용
	
	MainMenu mainMenu;
	mainMenu.printSrc();

	getch();

	return 0;
}