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
		a1=getpixel(108,548);
		a2=getpixel(328,548);
		a3=getpixel(548,548);
		a4=getpixel(108,328);
		a5=getpixel(328,328);
		a6=getpixel(548,328); 
		a7=getpixel(108,108);
		a8=getpixel(328,108);
		a9=getpixel(548,108);
		
		if(a1+a2+a3==9)win0();
		if(a4+a5+a6==9)win0();
		if(a7+a8+a9==9)win0();
		if(a1+a4+a7==9)win0();
		if(a2+a5+a8==9)win0();
		if(a3+a6+a9==9)win0();
		if(a1+a5+a9==9)win0();
		if(a3+a5+a7==9)win0();
		if(a1+a2+a3==36)winX();
		if(a4+a5+a6==36)winX();
		if(a7+a8+a9==36)winX();
		if(a1+a4+a7==36)winX();
		if(a2+a5+a8==36)winX();
		if(a3+a6+a9==36)winX();
		if(a1+a5+a9==36)winX();
		if(a3+a5+a7==36)winX();
		if ((a1+a2+a3>9)&&(a4+a5+a6>9)&&(a7+a8+a9>9)&&(a1+a4+a7>9)&&(a2+a5+a8>9)&&(a3+a6+a9>9)&&(a1+a5+a9>9)&&(a3+a5+a7>9)&&(a1+a2+a3<36)&&(a4+a5+a6<36)&&(a7+a8+a9<36)&&(a1+a4+a7<36)&&(a2+a5+a8<36)&&(a3+a6+a9<36)&&(a1+a5+a9<36)&&(a3+a5+a7<36))
		dead_heat();
	}
	return 0; 
}
