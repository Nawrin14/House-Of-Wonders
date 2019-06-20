#ifndef NEWGAME_H_INCLUDED
#define NEWGAME_H_INCLUDED
#include "variables.h"


struct character{

	int height;
	int width;

	character(){

	}

	character(int _height, int _width){

		height=_height;
		width=_width;
	}

};

typedef struct character Character;


void newGamePage(){

		background backGround(y, z);

		storyImage = iLoadImage("Story page.jpg");
		iShowImage(0, 0, backGround.width, backGround.height, storyImage);
		iSetColor(255, 255, 255);
		iText(90, 500, "Amy is escaping from some enemies. She runs for a long time. Then she enters into a large jungle. ", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(90, 450, "The jungle has few fantasy houses. As she is in the middle of the jungle, she searches for a house",  GLUT_BITMAP_TIMES_ROMAN_24);
		iText(90, 400, "to hide from the enemies. Finally, she is able to find one. But it is not as easy as she thought to hide", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(90, 350, "in that house. As it is a very old house, nobody has lived there for a long time. So, Amy needs to", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(90, 300, "complete all the tasks inside the house and conquer it. She needs to use her skills to finish the tasks", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(90, 250, "assingned in each room. Help her conquer the house......", GLUT_BITMAP_TIMES_ROMAN_24); 
		iShowImage(1003, 65, 194, 92, buttonBorder);
		iSetColor(128, 0, 0);
		iText(1060, 100, "START", GLUT_BITMAP_TIMES_ROMAN_24);
		showBackbutton();
}

void enterName(){

		background backGround(y, z);

		//enterNameImage=iLoadImage("Enter Name.PNG");
		iShowImage(0, 0, backGround.width, backGround.height, blackFrame);
		iSetColor(255, 255, 255);
		iText(555, 400, "Enter Your Name", GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(255, 255, 255);
		iRectangle(515, 320, 260, 30);
		//takeNameInput=1;
}


void showWelcomeScreen(){

		background backGround(y, z);
		Character ch(p, q);

		iSetColor(0,0,0);
		iFilledRectangle(0, 0, backGround.width, backGround.height);

		characterImage = iLoadImage("Character.png");
		iShowImage(250, 0, 100, 200, characterImage);
}

void showHelpScreen(){

		gameState=3;
		//welcome1=2;
}

void showAdventureScreen(){

		gameState=4;
		//welcome1=3;
}

void showEntrance(){

		gameState=5;
		doorBackgroundImage = iLoadImage("Door.PNG");
		doorImage = iLoadImage("Door.JPG");
}

//Loading hero Rightside run image
void loadHeroImage(){

		run[0]=iLoadImage("Run_000.png");
		run[1]=iLoadImage("Run_001.png");
		run[2]=iLoadImage("Run_002.png");
		run[3]=iLoadImage("Run_003.png");
		run[4]=iLoadImage("Run_004.png");
		run[5]=iLoadImage("Run_005.png");
		run[6]=iLoadImage("Run_006.png");
		run[7]=iLoadImage("Run_007.png");
		run[8]=iLoadImage("Run_008.png");
		run[9]=iLoadImage("Run_009.png");


		runleft[0]=iLoadImage("Runleft__000.png");
		runleft[1]=iLoadImage("Runleft__001.png");
		runleft[2]=iLoadImage("Runleft__002.png");
		runleft[3]=iLoadImage("Runleft__003.png");
		runleft[4]=iLoadImage("Runleft__004.png");
		runleft[5]=iLoadImage("Runleft__005.png");
		runleft[6]=iLoadImage("Runleft__006.png");
		runleft[7]=iLoadImage("Runleft__007.png");
		runleft[8]=iLoadImage("Runleft__008.png");
		runleft[9]=iLoadImage("Runleft__009.png");
		

		jumps[0]=iLoadImage("Jump__000.png");
		jumps[1]=iLoadImage("Jump__001.png");
		jumps[2]=iLoadImage("Jump__002.png");
		jumps[3]=iLoadImage("Jump__003.png");
		jumps[4]=iLoadImage("Jump__004.png");
		jumps[5]=iLoadImage("Jump__005.png");
		jumps[6]=iLoadImage("Jump__006.png");
		jumps[7]=iLoadImage("Jump__007.png");
		jumps[8]=iLoadImage("Jump__008.png");
		jumps[9]=iLoadImage("Jump__009.png");

		instructionsImage=iLoadImage("frame.png");
		blackFrame=iLoadImage("black frame.jpg");
		gameOverImage=iLoadImage("game over.jpg");
		//fightingBackground = iLoadImage("fighting background.JPG");
		//obstacleBackground = iLoadImage("ObstacleBackground.png");

		//coinBackground = iLoadImage("coinBackgroundImage.PNG");
		
}

void showCoinBackground(){

		//gameState=6;
		coinBackground = iLoadImage("coinBackgroundImage.jpg");
		imageCoin = iLoadImage("coin.png");
		
}


void showObstacleBackground(){

		obstacleBackground = iLoadImage("ObstacleBackground.png");
		obstacle = iLoadImage("obstacle.png");
		obstacle1 = iLoadImage("obstacle.png");
		obstacle2 = iLoadImage("obstacle.png");
		//gameState=8;

}


void showFightingBackground(){

		fightingBackground = iLoadImage("fighting background.jpg");
}

//Showing image by isetTimer
void coinShowingTime()
{
			coinX=rand()%1100;
			coinY=rand()%300 + heroY;
			count++;
}


void runChange(){

		runIndex++;
		if(runIndex>=9)
		{
			runIndex=0;
			
		}
}

void runleftChange(){

		runleftIndex++;
		if(runleftIndex>=9)
		{
			runleftIndex=0;
			
		}
}

void jumpChange(){

		jumpIndex++;
		if(jumpIndex>=9)
		{
			jumpIndex=0;
			
		}
}

void jumpDownChange(){

		jumpIndex--;
		if(jumpIndex<=0)
		{
			jumpIndex=0;
			
		}
}
//RunChange function for Right side run

#endif