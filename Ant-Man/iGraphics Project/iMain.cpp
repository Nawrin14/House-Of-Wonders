#include "iGraphics.h"


void drawSuperhero()
{

	iSetColor(192,192,192);
	double X[]={520,570,620,670,690,680,670,630,560,520,510,500};
	double Y[]={150,120,120,150,230,230,280,315,315,280,230,230};
	int N1=12;
	iFilledPolygon(X,Y,N1);
	iSetColor(128,128,128);
	double x[]={520,520,560,595,630,670,670,630,560};
	double y[]={230,180,150,180,150,180,230,280,280};
	int N2=9;
	iFilledPolygon(x,y,N2);
	iSetColor(169,169,169);
	double a[]={572,620,617,595,572};
	double b[]={120,120,160,180,160};
	int N3=5;
	iFilledPolygon(a,b,N3);
	iSetColor(128,128,128);
	iFilledCircle(595,125,23,50);
	iFilledRectangle(505,230,5,50);
	iFilledRectangle(680,230,5,50);
	iSetColor(255,0,0);
	iFilledRectangle(560,230,5,50);
	iFilledRectangle(625,230,5,50);
	double A[]={545,545,560,585,585,560};
	double B[]={230,220,210,220,230,240};
	int N4=6;
	iFilledPolygon(A,B,N4);
	double c[]={640,640,625,600,600,625};
	double d[]={230,220,210,220,230,240};
	int N5=6;
	iFilledPolygon(c,d,N5);

}


void iDraw()
{

	iClear();
	
	iSetColor(0,0,0);
	iFilledRectangle(0,0,800,400);

	drawSuperhero();

}


void iPassiveMouse(int x, int y)
{

	;

}


void iMouseMove(int mx, int my)
{

	;

}


void iMouse(int button, int state, int mx, int my)
{

	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		;
	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		;
	}

}


void iKeyboard(unsigned char key)
{

	if (key == 'q')
	{
		exit(0);
	}
	
}


void iSpecialKeyboard(unsigned char key)
{

	if (key == GLUT_KEY_END)
	{
		exit(0);
	}

}


int main()
{

	iInitialize(800, 400, "ANT-MAN");

	iStart();

	return 0;

}

