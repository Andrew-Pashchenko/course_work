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

int main()
{   
	initwindow(660,660);
	setbkcolor(0);
	menu();
	return 0;
}
