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

using namespace std;

int draw_x(int x, int y)
{
     setcolor(12);
     	 if (getpixel(x-200,y-110)==0)
	        {
	            line(x-40, y-22, x-198, y-180);
                line(x-22, y-40, x-180, y-198); 
                line(x-180, y-22, x-22, y-180); 
                line(x-198, y-40, x-40, y-198); 
      
                line(x-40, y-22, x-22, y-40); 
                line(x-198, y-180, x-180, y-198); 
                line(x-180, y-22, x-198, y-40); 
                line(x-22, y-180, x-40, y-198); 
                
				moveto(x-110,y-110);
                lineto(x-113,y-113);
            }
 else return 0;
 return 0;   
}
