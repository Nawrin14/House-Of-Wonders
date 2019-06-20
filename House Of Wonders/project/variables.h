#ifndef VARIABLES_H_INCLUDED
#define VARIABLES_H_INCLUDED


int firstImage, mainMenu, buttonBorder;
int about, instructions, newGame, settings, highScore, back;
int aboutImage, instructionsImage, settingsImage, highScoreImage, blackFrame; 
int storyImage;

int x = 0, menu, start, gameState, state;
int newGameColorChange, instructionsColorChange, settingsColorChange, highScoreColorChange, creditsColorChange;
int backButtonColorChange, quitColorChange, startColorChange;
int musicOn, musicOff;
int y=700, z=1265;
int p=70, q=100;
int enterNameImage, takeNameInput, writeNameinFile;
int characterImage;

int len = 0, mode = 0;
char str[100], str1[100];

int doorBackgroundImage, doorImage, unlockColorChange, unlockColorChange2, unlockColorChange3;

int run[10], runleft[10], jumps[10];


int coinBackground;
int imageBack,imageCoin,imageHero,imageObstacle;
int coinX,coinY;
int heroX=70,heroY=100;
int hero_speed=15;
int count = 0; //count defined that how many times coin will be appeared on screen
bool up = false;
bool down = false;
bool right = false;
bool left = false;
bool heroRunright = false, heroRunleft = false, heroStand = true, heroJump = false, heroJumpDown = false;
int dx=30,dy=30, runIndex=0, runleftIndex=0, jumpIndex=0, jumpDownIndex=9 ;
int dx1=50;
int a,b,c,d,e,f;


int obstacleBackground, obstacle, obstacleX=230, obstacleY=700, obstacleSpeed=10;
int obstacle1, obstacleX1=500, obstacleY1=700, obstacleSpeed1=30;
int obstacle2, obstacleX2=700, obstacleY2=700, obstacleSpeed2=20;
int heroX1=100, heroY1=30;



int fightingBackground;

int gameOver, gameOverImage;

unsigned long long int score=0;

bool timer=true;
int write=0;
int cnt=0;

#endif