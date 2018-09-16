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

using namespace std;

void field()
{ 
	setcolor(2);
	line(0, 0, 659, 0); 
	line(0, 220, 659, 220);
	line(0, 440, 659, 440);
	line(0, 659, 659, 659);
      
	line(0, 0, 0, 659); 
	line(220, 0, 220, 659);
	line(440, 0, 440, 659);
	line(659, 0, 659, 659);
}
