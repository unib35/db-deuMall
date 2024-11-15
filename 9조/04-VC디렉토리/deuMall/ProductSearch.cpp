#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <vector>


#include "screenControl.h"

#include "ProductSearch.h"
#include "ManagerMenu.h"
#include "ProductChange.h"
#include "ProductDelete.h"
#include "Dao.h"

using namespace std;

void ProductSearch::printSrc()
{
	while (1) {
		clrscr();

		print_screen("./screen/inquiryproduct_screen.txt");

		vector<ItemsDto> items = selectItems();	//������ ����Ʈ �޾ƿ�
		int size = items.size();
		int i = 0;

		for (ItemsDto item : items) {	//����Ʈ ���鼭 �ϳ��� ���
			gotoxy(20, 11 + i++);
			printf("%s\t%7d ��\t%4d ��", item.name, item.price, item.stock);
		}

		int prodY = cursorControl(19, 11, 11 + (size - 1), 1);	//������ �������� Y �� ��ȯ

		int itemIndex = prodY - 11;	//������ �ε����� items.at(itemIndex)�� �����ϸ� ������ ������ ���� ���� 

		gotoxy(18, prodY);	//������ ������ ���� ��ŷ
		printf("*");


		int y = cursorControl(31, 22, 26, 2);

		switch (y) {

		case CHANGE:
			ProductChange productchange;
			productchange.setItemIndex(itemIndex);
			productchange.printSrc();
			
			break;

		case DELETE:
			ProductDelete productdelete;
			productdelete.setItemIndex(itemIndex);
			productdelete.printSrc();

			break;


		case RETURN:
			return;
		}
	}
}

