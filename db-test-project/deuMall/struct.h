#pragma once
struct MembersDto {
	char member_id[20];
	char pw[20];
	char name[20];
};

struct OrdersDto {
	int order_id;
	int item_id;
	char member_id[20];
	int quantity;
	char status[20];
};

struct itemsDto {
	int item_id;
	char name[20];
	int price;
	int stock;
	char description[250];
};

struct MembersDto select_MemberId(char id[]);
void execute_update(char query[]);
void copy_struct(struct MembersDto *result, struct MembersDto target);