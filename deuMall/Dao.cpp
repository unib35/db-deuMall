#define _CRT_SECURE_NO_WARNINGS

#include "Dao.h"

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <vector>
#include <iostream>

using namespace std;

char query[1000];

void addMember(MembersDto member) {
	sprintf(query, "insert into members values ('%s', '%s', '%s')", member.member_id, member.pw, member.name);
	execute_update(query);
}

void addItem(ItemsDto item) {
	sprintf(query, "INSERT INTO Items (item_id, name, price, stock, description) VALUES(item_id_seq.NEXTVAL, '%s', %d, %d, '%s')", item.name, item.price, item.stock, item.description);
	execute_update(query);
}

void adddorder(OrdersDto order) {
	sprintf(query, "insert into orders (order_id, item_id, member_id, quantity, status) values (item_id_seq.NEXTVAL, %d, '%s', %d, '%s')", order.item_id, order.member_id, order.quantity, order.status);
	execute_update(query);
}

void deleteItem(int id) {
	sprintf(query, "delete from items where item_id = %d", id);
	execute_update(query);
}

void orderStatus(int id, const char status[]) {
	sprintf(query, "update orders set status = '%s' where order_id = %d", status, id);
	execute_update(query);
}

void updateItem(int id, ItemsDto item) {
	sprintf(query, "update items set name = '%s', price = %d, stock = %d, description = '%s' where item_id = %d", item.name, item.price, item.stock, item.description, id);
	execute_update(query);
}

struct MembersDto findByMemberId(char id[]) {
	return select_MemberId(id);
}

vector<ItemsDto> selectItems() {
	ItemsDto* items = select_ItemList();
	vector<ItemsDto> result;
	for (int i = 0; i < 10; i++) {
 
		if (items[i].item_id > 0 && items[i].item_id <= 10) {
			result.push_back(items[i]);
		}
	}

	return result;
}

vector<MembersDto> selectMembers() {
	MembersDto *members = select_MemberList();
	
	vector<MembersDto> result;
	for (int i = 0; i < 10; i++) {
		printf("%s \n", members[i].name);
		//printf("[%d] 1%s  \n",i, members[i].name);

		//result.push_back(members[i]);
	} 
	return result;
}