#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <vector>

#include "MainMenu.h"
#include "ShoppingMenu.h"
#include "Dao.h"

#define getch() _getch()

using namespace std;

int main()
{
	_putenv("NLS_LANG=American_America.KO16KSC5601"); //�ѱۻ��
	
	MainMenu mainMenu;
	mainMenu.printSrc();

	getch();
}