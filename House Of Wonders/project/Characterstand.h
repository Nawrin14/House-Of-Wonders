#ifndef CHARACTERSTAND_H_INCLUDED
#define CHARACTERSTAND_H_INCLUDED
#include "Variables2.h"
void loadstandImage()
{
	idle1=iLoadImage("png\\Idle__009.png");
	idle2=iLoadImage("png\\Idleleft__000.png");
}
void Charstand()
{
	if(stand)//condition where the character stands facing right side
	 {
		 standleft=false;
		 iShowImage(Char_posX,Char_posY,50,50,idle1);
	 }
	 if(standleft)//condition where the character stands facing left side
	 {
		 stand=false;
		 iShowImage(Char_posX,Char_posY,50,50,idle2);
	 }
}
#endif