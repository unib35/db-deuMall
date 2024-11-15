#include <stdlib.h>
#include <stdio.h>
#include <conio.h>


#include "screenControl.h"

#include "UserfileMenu.h"
#include "ManagerMenu.h"

void UserfileMenu::printSrc()
{
	clrscr();

	print_screen("./screen/userfile_screen.txt");

	int y = cursorControl(29, 23, 23, 2);

	switch (y) {
	case BACK:
		break;
	}


}

