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

int game()
{
	int a1=false, a2=false, a3=false, a4=false, a5=false, a6=false, a7=false, a8=false, a9=false, b1=false, b2=false, b3=false, b4=false, b5=false, b6=false, b7=false, b8=false, b9=false;
	int a_input;
	cleardevice();     
	field();      
	while (1)
	{            
		a_input = getch();
		switch (a_input)
		{
			case 49: draw_o(220,660); break;
			case 50: draw_o(440,660); break;
			case 51: draw_o(660,660); break;
			case 52: draw_o(220,440); break;
			case 53: draw_o(440,440); break;
			case 54: draw_o(660,440); break;
			case 55: draw_o(220,220); break;
			case 56: draw_o(440,220); break;
			case 57: draw_o(660,220); break;

			case 122: draw_x(220,660); break;
			case 120: draw_x(440,660); break;
			case 99:  draw_x(660,660); break;
			case 97:  draw_x(220,440); break;
			case 115: draw_x(440,440); break;
			case 100: draw_x(660,440); break;
			case 113: draw_x(220,220); break;
			case 119: draw_x(440,220); break;
			case 101: draw_x(660,220); break;
		}
	}
	return 0; 
}