#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include "ManagerMenu.h"
#include "ShoppingMenu.h"
#include "screenControl.h"
#include "LoginMenu.h"


void ShoppingMenu::printSrc()
{
	clrscr();

	print_screen("./screen/order_screen.txt");

	int y = cursorControl(19, 22, 24, 2);

	switch (y) {
	case SEARCH :
		// ��񿡼� ����Ʈ �޾ƿ� �� ��ǰ ��ȭ�� ��ȯ�ϴ°� �����ؾ���
		// �ֹ� ��ȸ Ŭ���� �ֹ� ��ȸ ȭ������ ��ȯ�ϴ°� �����ؾ���
		// ���� �ӽ÷� ������ �޴��� �����صξ���
		break;
	case PREVIEW :
		return;
	}


}

