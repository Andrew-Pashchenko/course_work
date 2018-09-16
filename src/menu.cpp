#include <iostream>
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include "menu.h"
#include "dvizheniya.h"

using namespace std;

int menu()
{
	int x, y;
	int i_input;
	cleardevice();
	setcolor(20);
	outtextxy(225,250, "Добро пожаловать в игру Крестики-нолики");
	outtextxy(225,270, "Меню : ");
	outtextxy(225,290, "1- Играть ");
	outtextxy(225,310, "2- Управление ");
	i_input = getch();
	switch(i_input)
	{
		case 49:return game(); 
		case 50:cleardevice();
		setcolor(20);
		outtextxy(225,250, "Игрок ноликов управляет клавишами'1-9'' ");
		outtextxy(225,270, "Игрок крестиков управляет клавишами'z-e'  ");
		outtextxy(225,290, "Нажмите пробел, чтобы вернуться в меню");
		getch();
		case 13:return menu();
	}
}
