#include <stdlib.h>
#include <stdio.h>
#include <conio.h>


#include "screenControl.h"
#include "TrackingOrder.h"
#include "MainMenu.h"

void TrackingOrder::printSrc()
{
	clrscr();

	print_screen("./screen/ordertracking_screen.txt");

	int y = cursorControl(34, 22, 24, 2);

	switch (y) {
		// �ߺ�Ȯ�� ��ư �����ؾ���
	case FIRST:
		MainMenu mainmenu;
		mainmenu.printSrc();
		break;

	case EXIT:
		exit(0);
	}
}

