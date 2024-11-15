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
		// 디비 연결 후 주문 리스트 클릭 했을 시 넘어가는 화면 구성해야함


	case COMPLETE:
		return;

	case CANCLE:
		return;
	}


}

