#include <stdlib.h>
#include <stdio.h>
#include <conio.h>


#include "screenControl.h"

#include "OrderMenu.h"
#include "OrderManage.h"


void OrderMenu::printSrc()
{
	clrscr();

	print_screen("./screen/ordermanagement_screen.txt");

	int y = cursorControl(31, 20, 22, 2);

	switch (y) {
	// ��� ���� �� �ֹ� ����Ʈ Ŭ�� ���� �� �Ѿ�� ȭ�� �����ؾ���
	

	case CLICK:
		OrderManage ordermanage;
		ordermanage.printSrc();
		break;

	case BACK:
		break;
	}


}

