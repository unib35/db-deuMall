#include <stdlib.h>
#include <stdio.h>
#include <conio.h>


#include "screenControl.h"

#include "ProductChange.h"
#include "ManagerMenu.h"

void ProductChange::printSrc()
{
	clrscr();

	print_screen("./screen/productchange_screen.txt");

	int y = cursorControl(35, 21, 23, 2);

	switch (y) {

		// ��� ���� �� ��ǰ ����Ʈ Ŭ�� �� ��ǰ ���� �� ���� ȭ�� �����ؾ���
	case COMPLETE:
		ManagerMenu managermenu;
		managermenu.printSrc();
		break;

	case BACK:
		break;
	}


}

