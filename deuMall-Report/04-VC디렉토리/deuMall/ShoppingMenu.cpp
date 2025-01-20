#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <vector>

#include "ManagerMenu.h"
#include "ShoppingMenu.h"
#include "screenControl.h"
#include "LoginMenu.h"
#include "Dao.h"
#include "ProductDetails.h"
#include "TrackingOrder.h"

void ShoppingMenu::printSrc()
{
	while (1) {
		clrscr();

		print_screen("./screen/order_screen.txt");

		vector<ItemsDto> items = selectItems();	//������ ����Ʈ �޾ƿ�
		int size = items.size();
		int i = 0;

		for (ItemsDto item : items) {	//����Ʈ ���鼭 �ϳ��� ���
			gotoxy(19, 10 + i++);
			printf("%s\t%7d ��\t%4d ��", item.name, item.price, item.stock);
		}

		int prodY = cursorControl(18, 10, 10 + (size - 1), 1);	//������ �������� Y �� ��ȯ

		int itemIndex = prodY - 10;	//������ �ε����� items.at(itemIndex)�� �����ϸ� ������ ������ ���� ���� 

		gotoxy(17, prodY);	//������ ������ ���� ��ŷ
		printf("*");

		int y = cursorControl(19, 22, 26, 2);

		switch (y) {
		case SEARCH:
			ProductDetails p;
			p.setIndex(itemIndex);
			p.setUser(this->user);
			p.printSrc();
			break;


		case VIEW:
			TrackingOrder t;
			t.setUser(user);
			t.printSrc();
			break;

		case BACK:
			return;
		}
	}

}


void ShoppingMenu::setUser(MembersDto u) {
	this->user = u;
}

