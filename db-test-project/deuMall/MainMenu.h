#pragma once
#pragma comment (lib, "winmm.lib")
#define _CRT_SECURE_NO_WARNINGS


#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <mmsystem.h>


extern "C" {
	#include "struct.h"
}


class MainMenu {
	int x = 34;
	int y = 20;
	int y_end = 24;
	int gap = 2;
	static const int LOGIN = 20;
	static const int SIGNUP = 22;
	static const int EXIT = 24;

	
public:
	void printSrc();
};

