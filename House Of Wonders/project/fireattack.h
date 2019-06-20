#ifndef FIREATTACK_H_INCLUDED
#define FIREATTACK_H_INCLUDED
#include"Variables2.h"
void loadfireattackImage()
{
	fires[0]=iLoadImage("png\\Throw__000.png");
	fires[1]=iLoadImage("png\\Throw__001.png");
	fires[2]=iLoadImage("png\\Throw__002.png");
	fires[3]=iLoadImage("png\\Throw__003.png");
	fires[4]=iLoadImage("png\\Throw__004.png");
	fires[5]=iLoadImage("png\\Throw__005.png");
	fires[6]=iLoadImage("png\\Throw__006.png");
	fires[7]=iLoadImage("png\\Throw__007.png");
	fires[8]=iLoadImage("png\\Throw__008.png");
	fires[9]=iLoadImage("png\\Throw__009.png");

	fireleft[0]=iLoadImage("png//Throwleft__000 (1).png");
	fireleft[1]=iLoadImage("png//Throwleft__000 (2).png");
	fireleft[2]=iLoadImage("png//Throwleft__000 (3).png");
	fireleft[3]=iLoadImage("png//Throwleft__000 (4).png");
	fireleft[4]=iLoadImage("png//Throwleft__000 (5).png");
	fireleft[5]=iLoadImage("png//Throwleft__000 (6).png");
	fireleft[6]=iLoadImage("png//Throwleft__000 (7).png");
	fireleft[7]=iLoadImage("png//Throwleft__000 (8).png");
	fireleft[8]=iLoadImage("png//Throwleft__000 (9).png");
	fireleft[9]=iLoadImage("png//Throwleft__000 (10).png");
}
void Charfireattack()
{
	if(attack)//condition where the character throw fire power facing right side
	 {
		
		iShowImage(Char_posX,Char_posY,100,50,fires[attackindex]);
		if(attackindex==0){
		if(!fire){
		attack=false;
		stand=true;
		}
		fire=true;
		}

	 }
	 if(fireattackleft)//condition where the character throw fire power facing left side
	 {
		
		 iShowImage(Char_posX,Char_posY,100,50,fireleft[attackleftindex]);
		 if(attackleftindex==0){
			 if(!fire){
				fireattackleft=false;
				standleft=true;
			 }
			fire=true;
		}
	 }
}

void attackchange()
{
	attackindex++;
	if(attackindex>=9){
		attackindex=0;
	}
}
void fireattackleftchange()
{
	attackleftindex++;
	if(attackleftindex>=9){
		attackleftindex=0;
	}
}
#endif