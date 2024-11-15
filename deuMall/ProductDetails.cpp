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

		// 디비 연결 후 상품 리스트 클릭 시 상품 변경 및 삭제 화면 구성해야함
	case BUY:
		TrackingOrder trackingorder;
		trackingorder.printSrc();
		break;

	case BACK:
		break;
	}


}

