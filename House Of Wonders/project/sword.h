#ifndef SWORD_H_INCLUDED
#define SWORD_H_INCLUDED
#include "Variables2.h"
void loadSwordImage()
{
	attacks[0]=iLoadImage("png\\Attack__000.png");
	attacks[1]=iLoadImage("png\\Attack__001.png");
	attacks[2]=iLoadImage("png\\Attack__002.png");
	attacks[3]=iLoadImage("png\\Attack__003.png");
	attacks[4]=iLoadImage("png\\Attack__004.png");
	attacks[5]=iLoadImage("png\\Attack__005.png");
	attacks[6]=iLoadImage("png\\Attack__006.png");
	attacks[7]=iLoadImage("png\\Attack__007.png");
	attacks[8]=iLoadImage("png\\Attack__008.png");
	attacks[9]=iLoadImage("png\\Attack__009.png");
	
	attackleft[0]=iLoadImage("png\\Attackleft__009 (1).png");
	attackleft[1]=iLoadImage("png\\Attackleft__009 (2).png");
	attackleft[2]=iLoadImage("png\\Attackleft__009 (3).png");
	attackleft[3]=iLoadImage("png\\Attackleft__009 (4).png");
	attackleft[4]=iLoadImage("png\\Attackleft__009 (5).png");
	attackleft[5]=iLoadImage("png\\Attackleft__009 (6).png");
	attackleft[6]=iLoadImage("png\\Attackleft__009 (7).png");
	attackleft[7]=iLoadImage("png\\Attackleft__009 (8).png");
	attackleft[8]=iLoadImage("png\\Attackleft__009 (9).png");
	attackleft[9]=iLoadImage("png\\Attackleft__009 (10).png");
}

void swordattack()
{
	if(sword)//condition where the character starts attacking using sword facing right side
	 {
		 
		iShowImage(Char_posX,Char_posY,100,50,attacks[swordindex]);
		if(swordindex==0){
		sword=false;
		stand=true;
		}
	 }
	 if(swordleft)//condition where the character starts attacking using sword facing left side
	 {
		 
		  iShowImage(Char_posX,Char_posY,100,50,attackleft[swordleftindex]);
		  if(swordleftindex==0)
		  {
			  swordleft=false;
			  standleft=true;
		  }
	 }

}
void swordchange()
{
	swordindex++;
	if(swordindex>=9){
		swordindex=0;
	}
}

void swordleftchange()
{
	swordleftindex++;
	if(swordleftindex>=9){
		swordleftindex=0;
	}
}
#endif