#include <stdlib.h>
#include <stdio.h>
#include <conio.h>


#include "screenControl.h"

#include "SaleMenu.h"
#include "ManagerMenu.h"

void SaleMenu::printSrc()
{
	clrscr();

	print_screen("./screen/sales_screen.txt");

	int y = cursorControl(29, 23, 23, 2);

	switch (y) {
	case BACK:
		break;

	}


}

