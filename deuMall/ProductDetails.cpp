#include <stdlib.h>
#include <stdio.h>
#include <conio.h>


#include "screenControl.h"

#include "ProductDetails.h"
#include "ManagerMenu.h"
#include "TrackingOrder.h"

void ProductDetails::printSrc()
{
	clrscr();

	print_screen("./screen/productdetails_screen.txt");

	int y = cursorControl(29, 23, 25, 2);

	switch (y) {

		// ��� ���� �� ��ǰ ����Ʈ Ŭ�� �� ��ǰ ���� �� ���� ȭ�� �����ؾ���
	case BUY:
		TrackingOrder trackingorder;
		trackingorder.printSrc();
		break;

	case BACK:
		break;
	}


}

