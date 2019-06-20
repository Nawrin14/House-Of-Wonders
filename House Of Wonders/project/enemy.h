#ifndef ENEMY_H_INCLUDED
#define ENEMY_H_INCLUDED
#include"Variables2.h"
void loadenemyImage()
{
	enemywalk[0]=iLoadImage("png\\Bandit02_Walk_000.png");
	enemywalk[1]=iLoadImage("png\\Bandit02_Walk_001.png");
	enemywalk[2]=iLoadImage("png\\Bandit02_Walk_002.png");
	enemywalk[3]=iLoadImage("png\\Bandit02_Walk_003.png");
	enemywalk[4]=iLoadImage("png\\Bandit02_Walk_004.png");
	enemywalk[5]=iLoadImage("png\\Bandit02_Walk_005.png");
	enemywalk[6]=iLoadImage("png\\Bandit02_Walk_006.png");
	enemywalk[7]=iLoadImage("png\\Bandit02_Walk_007.png");
	
	enemyattack[0]=iLoadImage("png\\__Bandit02_Attack_000.png");
	enemyattack[1]=iLoadImage("png\\__Bandit02_Attack_001.png");
	enemyattack[2]=iLoadImage("png\\__Bandit02_Attack_002.png");
	enemyattack[3]=iLoadImage("png\\__Bandit02_Attack_003.png");
	enemyattack[4]=iLoadImage("png\\__Bandit02_Attack_004.png");
	enemyattack[5]=iLoadImage("png\\__Bandit02_Attack_005.png");
	enemyattack[6]=iLoadImage("png\\__Bandit02_Attack_006.png");
	enemyattack[7]=iLoadImage("png\\__Bandit02_Attack_007.png");
}

void enemymovement()
{
	if(enemyright)//condition to move the character to right postion
	 {
		iShowImage(enemy_posX,enemy_posY,100,50,enemywalk[enemyrightindex]);	
		enemy_posX+=enemy_speed-3;
	 }

	if((enemy_posX)>=Char_posX-80 && (enemy_posX)<=Char_posX+80)//enemy stops moving and stops in front of the enemy when this condition works
		{
			enemy_speed=0;
			enemyattackright=true;
			if(enemyattackright){//When enemy stops moving this condition plays the role to start attacking the character
			iShowImage(enemy_posX,enemy_posY,100,50,enemyattack[enemyattackindex]);
			enemyright=false;
			}
		}

	if(enemyattackright){//conditon where enemy attack character
			iShowImage(enemy_posX,enemy_posY,100,50,enemyattack[enemyattackindex]);
			if(enemyattackindex==7)
				Char_life++;
			enemyright=false;
			
	 }
}

void enemyrightchange()
{
	enemyrightindex++;
	if(enemyrightindex>=7)
		enemyrightindex=0;
}

void enemyattackchange()
{
	enemyattackindex++;
	if(enemyattackindex>7){
		enemyattackindex=0;
	}
}


#endif