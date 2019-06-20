#ifndef FIRE_H_INCLUDED
#define FIRE_H_INCLUDED
void firemovement()
{
	if(fire)//condition where the firepower moves towards the enemy
	{
		if(attack){
			iShowImage(fx,fy,30,20,i1);
			fx+=(fire_speed+20);
		}
		if(fireattackleft){
			iShowImage(fx,fy,30,20,i1);
			fx-=(fire_speed+20);
		}
		//ex-=fire2_speed;
	}
	if(fx>1150 /*&& ex<50*/){
		fire=false;
		fx=Char_posX+10;
		//ex=enemy_posX+10;
	}
	if(fx<0)
	{
		fire=false;
		fx=Char_posX-10;
		//ex=enemy_posX+10;
	}
	/*if(enemyright)
	{
		iShowImage(enemy_posX,enemy_posY,100,50,enemywalk[enemyrightindex]);	
		enemy_posX+=enemy_speed;

	}*/
	if(fx<=enemy_posX)
	{
		enemy_posX=-100;
		//enemy_speed+=2;
		cnt++;
		if(cnt==3)
			gameOver=1;
		enemyattackright=false;
		enemyright=true;
		fire=true;
	}

	if(fire)//condition to fire the enemy
	 {
		 if(right || left){
			 enemy_speed=5;
			 enemyright=true;
			 enemyattackright=false;
		 }
	 }
}
#endif