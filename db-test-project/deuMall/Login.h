#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <conio.h>


extern "C" {
	#include "struct.h"
}


class Login
{
	int x = 35;
	int y = 20;
	int y_end = 22;
	int gap = 2;

	static const int LOGIN = 20;
	static const int CANCEL = 22;

public:
	void printSrc();
};

