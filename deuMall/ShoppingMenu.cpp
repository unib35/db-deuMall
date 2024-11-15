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
		// 디비에서 리스트 받아온 후 상품 상세화면 전환하는거 구현해야함
		// 주문 조회 클릭시 주문 조회 화면으로 전환하는거 구현해야함
		// 현재 임시로 관리자 메뉴로 연결해두었음
		break;
	case PREVIEW :
		return;
	}


}

