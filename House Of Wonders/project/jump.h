#ifndef JUMP_H_INCLUDED
#define JUMP_H_INCLUDED

void loadjumpImage()
{
	jumps2[0]=iLoadImage("png\\Jump__000.png");
	jumps2[1]=iLoadImage("png\\Jump__001.png");
	jumps2[2]=iLoadImage("png\\Jump__002.png");
	jumps2[3]=iLoadImage("png\\Jump__003.png");
	jumps2[4]=iLoadImage("png\\Jump__004.png");
	jumps2[5]=iLoadImage("png\\Jump__005.png");
	jumps2[6]=iLoadImage("png\\Jump__006.png");
	jumps2[7]=iLoadImage("png\\Jump__007.png");
	jumps2[8]=iLoadImage("png\\Jump__008.png");
	jumps2[9]=iLoadImage("png\\Jump__009.png");
}

void jumpmovement()
{
	if(jump)//condition where the character jumps
	 {
			attack=false;
			stand=false;
			if(jumpup)
				iShowImage(Char_posX,Char_posY+Char_jump,100,50,jumps2[4]);
			else
				iShowImage(Char_posX,Char_posY+Char_jump,100,50,jumps2[5]);
		
	 }
}
void jumpchange()
{
	if(jump)
	{
		if(jumpup)
		{
			Char_jump+=5;
			if(Char_jump>=100)
			{
				jumpup=false;
			}
		}
		else
		{
			Char_jump-=5;
			if(Char_jump<0)
			{
				jump=false;
				Char_jump=0;
				stand=true;
			}
		}
	}

}

#endif