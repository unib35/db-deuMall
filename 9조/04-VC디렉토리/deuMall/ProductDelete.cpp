#include <stdlib.h>
#include <stdio.h>
#include <conio.h>


#include "screenControl.h"

#include "ProductDelete.h"
#include "ManagerMenu.h"
#include "Dao.h"

void ProductDelete::printSrc()
{
	clrscr();

	print_screen("./screen/productdelete_screen.txt");

	vector<ItemsDto> items = selectItems();
	ItemsDto item = items.at(itemIndex);

	int y = cursorControl(29, 20, 22, 2);

	switch (y) {

		// ��� ���� �� ��ǰ ����Ʈ Ŭ�� �� ��ǰ ���� �� ���� ȭ�� �����ؾ���
	case REMOVE:
		deleteItem(item.item_id);
		break;

	case BACK:
		break;
	}


}

void ProductDelete::setItemIndex(int i) {
	this->itemIndex = i;
}

