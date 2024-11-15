#pragma once
extern "C" {
#include "execute_query.h"
}

#include <vector>

using namespace std;

void addMember(MembersDto member);
void addItem(ItemsDto item);
void adddorder(OrdersDto order);
void deleteItem(int id);
void orderStatus(int id, const char status[]);
void updateItem(int id, ItemsDto item);
struct MembersDto findByMemberId(char id[]);
vector<ItemsDto> selectItems();
vector<MembersDto> selectMembers();