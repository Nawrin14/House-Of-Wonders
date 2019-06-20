#ifndef RUN_H_INCLUDED
#define RUN_H_INCLUDED
#include"Variables2.h"


void loadrunImage()
{
	run[0]=iLoadImage("png\\Run__000.png");
	run[1]=iLoadImage("png\\Run__001.png");
	run[2]=iLoadImage("png\\Run__002.png");
	run[3]=iLoadImage("png\\Run__003.png");
	run[4]=iLoadImage("png\\Run__004.png");
	run[5]=iLoadImage("png\\Run__005.png");
	run[6]=iLoadImage("png\\Run__006.png");
	run[7]=iLoadImage("png\\Run__007.png");
	run[8]=iLoadImage("png\\Run__008.png");
	run[9]=iLoadImage("png\\Run__009.png");
	//iSetTimer(25,runchange);
	runleft2[0]=iLoadImage("png\\Runleft__000 (1).png");
	runleft2[1]=iLoadImage("png\\Runleft__000 (2).png");
	runleft2[2]=iLoadImage("png\\Runleft__000 (3).png");
	runleft2[3]=iLoadImage("png\\Runleft__000 (4).png");
	runleft2[4]=iLoadImage("png\\Runleft__000 (5).png");
	runleft2[5]=iLoadImage("png\\Runleft__000 (6).png");
	runleft2[6]=iLoadImage("png\\Runleft__000 (7).png");
	runleft2[7]=iLoadImage("png\\Runleft__000 (8).png");
	runleft2[8]=iLoadImage("png\\Runleft__000 (9).png");
	runleft2[9]=iLoadImage("png\\Runleft__000 (10).png");
}

void runright()
{
	if(right){//condition where character moves right
		stand=false;
		standleft=false;
		iShowImage(Char_posX,Char_posY,100,50,run[runindex]);
		Char_posX+=Char_speed-5;
		fx=Char_posX+20;
	}
}

void runleftside()
{
	if(left){//condition where chaacter moves left
		standleft=false;
		stand=false;
		iShowImage(Char_posX,Char_posY,100,50,runleft2[runleftindex]);
		Char_posX-=Char_speed-5;
		fx=Char_posX+20;
	}
}
void runchange()
{
	runindex++;
	if(runindex>=9)
		runindex=0;
}
void runleftchange()
{
	runleftindex++;
	if(runleftindex>=9)
		runleftindex=0;
}

void positionMaintain()
{
	if(Char_posX<0)
		Char_posX=0;
	if(Char_posX>1150)
		Char_posX=1150;
}
#endif