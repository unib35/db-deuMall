#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

#include "MainMenu.h"
#include "Dao.h"
#include <vector>

using namespace std;

#define getch() _getch()

int main()
{
	_putenv("NLS_LANG=American_America.KO16KSC5601"); //한글사용
	
	//vector<MembersDto> result;
	//result = selectMembers();
	
	vector<ItemsDto> result;
	result = selectItems();
	for (int i = 0; i < result.size(); i++) {
		//printf("%s\n", result[i].description);
	}

	char name[] = "member3";

	MembersDto member = findByMemberId(name);
	printf("멤버 출력 : %s", member.name);
	

	//MainMenu mainMenu;
	//mainMenu.printSrc();


	getch();
}