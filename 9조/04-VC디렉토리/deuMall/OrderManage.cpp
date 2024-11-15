#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <vector>

#include "screenControl.h"
#include "Dao.h"
#include "OrderManage.h"

using namespace std;

void OrderManage::printSrc()
{
	clrscr();

	print_screen("./screen/orderconfirmed_screen.txt");
	
	vector<OrdersDto> orders = selectOrders();
	OrdersDto order = orders.at(orderIndex);

	gotoxy(34, 10);
	printf("%s", findByItemId(order.item_id).name);

	gotoxy(34, 12);
	printf("%d", order.quantity);

	gotoxy(34, 14);
	printf("%s", findByMemberId(order.member_id).name);

	gotoxy(34, 16);
	printf("%d", order.quantity * findByItemId(order.item_id).price);

	gotoxy(34, 18);
	printf("%s", order.status);

	int y = cursorControl(31, 21, 25, 2);

	

	switch (y) {
		// ��� ���� �� �ֹ� ����Ʈ Ŭ�� ���� �� �Ѿ�� ȭ�� �����ؾ���


	case COMPLETE:
		orderStatus(order.order_id, "Ȯ��");
		break;

	case CANCLE:
		orderStatus(order.order_id, "���");
		break;
	}


}

void OrderManage::setOrderIndex(int i) {
	this->orderIndex = i;
}