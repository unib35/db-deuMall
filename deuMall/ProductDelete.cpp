#include <stdlib.h>
#include <stdio.h>
#include <conio.h>


#include "screenControl.h"

#include "ProductDelete.h"
#include "ManagerMenu.h"

void ProductDelete::printSrc()
{
	clrscr();

	print_screen("./screen/productdelete_screen.txt");

	int y = cursorControl(29, 20, 22, 2);

	switch (y) {

		// ��� ���� �� ��ǰ ����Ʈ Ŭ�� �� ��ǰ ���� �� ���� ȭ�� �����ؾ���
	case REMOVE:
		ManagerMenu managermenu;
		managermenu.printSrc();
		break;

	case BACK:
		break;
	}


}

