#include <iostream>
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include "menu.h"
#include "dvizheniya.h"
#include "ricynok_polya.h"
#include "ricynok_x.h"
#include "ricynok_o.h"
#include "win0.h"
#include "winx.h"
#include "nichiya.h"

using namespace std;

int win0()
{          
	int b_input;
	cleardevice();
	setcolor(3);
	outtextxy(225,250, "Победил игрокноликов ");
	outtextxy(225,270, "Выберите : ");
	outtextxy(225,290, "1- вернуться в меню  ");
	outtextxy(225,310, "2- выйти ");
	b_input = getch();
	switch(b_input)
	{
		case 49: cleardevice(); return menu();
		case 50: closegraph();
	}
	return 0;
}
