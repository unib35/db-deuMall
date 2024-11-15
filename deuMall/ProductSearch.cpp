#include <stdlib.h>
#include <stdio.h>
#include <conio.h>


#include "screenControl.h"

#include "ProductSearch.h"
#include "ManagerMenu.h"
#include "ProductChange.h"
#include "ProductDelete.h"

void ProductSearch::printSrc()
{
	while (1) {
		clrscr();

		print_screen("./screen/inquiryproduct_screen.txt");

		int y = cursorControl(31, 22, 26, 2);

		switch (y) {

			// 디비 연결 후 상품 리스트 클릭 시 상품 변경 및 삭제 화면 구성해야함
		case CHANGE:
			ProductChange productchange;
			productchange.printSrc();
			break;

		case DELETE:
			ProductDelete productdelete;
			productdelete.printSrc();
			break;


		case RETURN:
			return;
		}
	}
}

