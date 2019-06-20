#ifndef COVER_H_INCLUDED
#define COVER_H_INCLUDED
#include "variables.h"


struct backgroundImage{

	int height;
	int width;

	backgroundImage(){

	}

	backgroundImage(int _height, int _width){

		height=_height;
		width=_width;
	}

};

typedef struct backgroundImage background;


void showfirstImage(){

        firstImage = iLoadImage("House.jpg");

}

void showMenuImage(){

		background backGround(y, z);

		menu=1;
		start=0;
		mainMenu = iLoadImage("Main menu.jpeg");
	    iShowImage(0, 0, backGround.width, backGround.height, firstImage);
		iSetColor(128, 0, 0);
		buttonBorder = iLoadImage("button-border3.png");
		iShowImage(550, 550, 250, 100, buttonBorder);
		iText(600, 590, "MAIN MENU", GLUT_BITMAP_TIMES_ROMAN_24);

		iShowImage(203, 65, 194, 92, buttonBorder);
		iText(250, 100, "CREDITS", GLUT_BITMAP_TIMES_ROMAN_24);
		iShowImage(203, 145, 194, 92, buttonBorder);
		iText(230, 180, "HIGH SCORE", GLUT_BITMAP_TIMES_ROMAN_24);
		iShowImage(203, 225, 194, 92, buttonBorder);
		iText(240, 260, "SETTINGS", GLUT_BITMAP_TIMES_ROMAN_24);
		iShowImage(203, 305, 194, 92, buttonBorder);
		iText(210, 340, "INSTRUCTIONS", GLUT_BITMAP_TIMES_ROMAN_24);
		iShowImage(203, 385, 194, 92, buttonBorder);
		iText(230, 420, "NEW GAME", GLUT_BITMAP_TIMES_ROMAN_24);

		iShowImage(1003, 65, 194, 92, buttonBorder);
		iText(1070, 100, "QUIT", GLUT_BITMAP_TIMES_ROMAN_24);

}



void showBackbutton(){
		
		iShowImage(50, 564, 150, 92, buttonBorder);
		iSetColor(128, 0, 0);
		iText(90, 600, "MENU", GLUT_BITMAP_TIMES_ROMAN_24);
}

void showinstructionsImage(){

		background backGround(y, z);

		//instructionsImage=iLoadImage("instructions.jpg");
		iShowImage(0, 0, backGround.width, backGround.height, instructionsImage);
		iSetColor(255, 255, 255);
		iText(200, 490, "Press right, left, up & down keys to move the character.", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(200, 390, "Unlock the door & escape to next room.", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(200, 290, "Complete all the tasks assigned in each part to finish the game.", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(200, 190, "Click the new game button to start a new game.", GLUT_BITMAP_TIMES_ROMAN_24);
		showBackbutton();
}


void showsettingsImage(){

		background backGround(y, z);

		//settingsImage=iLoadImage("Settings.png");
		iShowImage(0, 0, backGround.width, backGround.height, instructionsImage);
		iSetColor(255, 255, 255);
		iText(300, 400, "MUSIC", GLUT_BITMAP_TIMES_ROMAN_24);
		//iText(300, 320, "CHARACTER", GLUT_BITMAP_TIMES_ROMAN_24);
		iShowImage(502, 365, 146, 91, buttonBorder);
		iShowImage(702, 365, 146, 91, buttonBorder);
		/*iShowImage(500, 270, 150, 120, buttonBorder);
		iShowImage(700, 270, 150, 120, buttonBorder);*/
		iSetColor(128, 0, 0);
		iText(555, 400, "ON", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(750, 400, "OFF", GLUT_BITMAP_TIMES_ROMAN_24);
		/*iText(420, 340, "1", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(500, 340, "2", GLUT_BITMAP_TIMES_ROMAN_24);*/
		showBackbutton();
}


void showhighScoreImage(){

		background backGround(y, z);

		//highScoreImage=iLoadImage("High Score.jpg");
		iShowImage(0, 0, backGround.width, backGround.height, instructionsImage);
		showBackbutton();

}

void showaboutImage(){

		background backGround(y, z);

		//aboutImage=iLoadImage("About.jpg");
		iShowImage(0, 0, backGround.width, backGround.height, instructionsImage);
		iSetColor(255, 255, 255);
		iText(200, 480, "GAME DEVELOPED BY", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(520, 400, "NAWRIN TABASSUM", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(520, 350, "MUBINA ASHRAFI", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(520, 300, "KAJI FUAD BIN AKHTER", GLUT_BITMAP_TIMES_ROMAN_24);
		showBackbutton();
}

void loadingPage1(){

	iSetColor(255, 0, 0);
	iText(850, 270, "HOUSE OF WONDERS", GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(255, 0, 0);
	iFilledRectangle(650, 150 , 50, 20);
	iSetColor(0, 0, 0);
	iText(900, 230, "Loading 10 %", GLUT_BITMAP_TIMES_ROMAN_24);
}

void loadingPage2(){

	iSetColor(255, 0, 0);
	iText(850, 270, "HOUSE OF WONDERS", GLUT_BITMAP_TIMES_ROMAN_24);
	iFilledRectangle(650, 150, 150, 20);
	iSetColor(0, 0, 0);
	iText(900, 230, "Loading 30 %", GLUT_BITMAP_TIMES_ROMAN_24);
}

void loadingPage3(){

	iSetColor(255, 0, 0);
	iText(850, 270, "HOUSE OF WONDERS", GLUT_BITMAP_TIMES_ROMAN_24);
	iFilledRectangle(650, 150, 250, 20);
	iSetColor(0, 0, 0);
	iText(900, 230, "Loading 40 %", GLUT_BITMAP_TIMES_ROMAN_24);
}

void loadingPage4(){

	iSetColor(255, 0, 0);
	iText(850, 270, "HOUSE OF WONDERS", GLUT_BITMAP_TIMES_ROMAN_24);
	iFilledRectangle(650, 150, 400, 20);
	iSetColor(0, 0, 0);
	iText(900, 230, "Loading 75 %", GLUT_BITMAP_TIMES_ROMAN_24);
}

void loadingPage5(){

	iSetColor(255, 0, 0);
	iText(850, 270, "HOUSE OF WONDERS", GLUT_BITMAP_TIMES_ROMAN_24);
	iFilledRectangle(650, 150, 600, 20);
	iSetColor(0, 0, 0);
	iText(900, 230, "Loading 100 %", GLUT_BITMAP_TIMES_ROMAN_24);
	//iPauseTimer(a);
}



#endif