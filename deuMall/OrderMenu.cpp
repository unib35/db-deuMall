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
	// 디비 연결 후 주문 리스트 클릭 했을 시 넘어가는 화면 구성해야함
	

	case CLICK:
		OrderManage ordermanage;
		ordermanage.printSrc();
		break;

	case BACK:
		break;
	}


}

