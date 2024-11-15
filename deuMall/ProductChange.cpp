#include <stdlib.h>
#include <stdio.h>
#include <conio.h>


#include "screenControl.h"

#include "ProductChange.h"
#include "ManagerMenu.h"

void ProductChange::printSrc()
{
	clrscr();

	print_screen("./screen/productchange_screen.txt");

	int y = cursorControl(35, 21, 23, 2);

	switch (y) {

		// 디비 연결 후 상품 리스트 클릭 시 상품 변경 및 삭제 화면 구성해야함
	case COMPLETE:
		ManagerMenu managermenu;
		managermenu.printSrc();
		break;

	case BACK:
		break;
	}


}

