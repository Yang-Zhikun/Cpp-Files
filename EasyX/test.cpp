#include<easyx.h>
#include<conio.h>
#include"headers/EasyX_tools.h"
int main(){
	initgraph(640, 480);
	setbkcolor(WHITE);
	cleardevice();
	setlinecolor(RED);
	setfillcolor(GREEN);
	setlinestyle(PS_SOLID);
	rectangle rect(10, 20, 50, 60); // ÐÞ¸Ä´ËÐÐ£¬É¾³ýYELLOW, BLUE
	rect.draw();

	_getch();
	closegraph();
	system("pause");
}