#include <stdlib.h>
#include <stdio.h>
#include <conio.h>


#include "screenControl.h"

#include "ProductDelete.h"
#include "ManagerMenu.h"

void ProductDelete::printSrc()
{
	clrscr();

	print_screen("./screen/productdelete_screen.txt");

	int y = cursorControl(29, 20, 22, 2);

	switch (y) {

		// 디비 연결 후 상품 리스트 클릭 시 상품 변경 및 삭제 화면 구성해야함
	case REMOVE:
		ManagerMenu managermenu;
		managermenu.printSrc();
		break;

	case BACK:
		break;
	}


}

