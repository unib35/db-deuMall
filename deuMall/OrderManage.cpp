#include <stdlib.h>
#include <stdio.h>
#include <conio.h>


#include "screenControl.h"

#include "OrderManage.h"


void OrderManage::printSrc()
{
	clrscr();

	print_screen("./screen/orderconfirmed_screen.txt");

	int y = cursorControl(31, 22, 24, 2);

	switch (y) {
		// ��� ���� �� �ֹ� ����Ʈ Ŭ�� ���� �� �Ѿ�� ȭ�� �����ؾ���


	case COMPLETE:
		return;

	case CANCLE:
		return;
	}


}

