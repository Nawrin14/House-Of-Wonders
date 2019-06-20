#ifndef VARIABLES2_H_INCLUDED
#define VARIABLES2_H_INCLUDED

//::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::VARIABLE DECLARATION:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://
//bool play=false;//Used to give access to game after pressing "p" 
//int start;//Used to hold starting picture
int i=0,j=0,k=0;//Just some variable to control loops
int Char_posX=400;//Character's position at X-axis
int Char_posY=100;//Character's position at Y-axis
int Char_speed=10;//Character's speed
int enemy_posX=20;//Enemy's position at X-axis
int enemy_posY=100;//Enemy's position at Y-axis
int enemy_posleftX=850;
int enemy_posleftY=100;
int enemy_speed=4;//Enemy's speed
//int enemyleftspeed=5;
int idle1,idle2;//These two varable hold the image of character standing in left & right position
int run2[10],fires[10],jumps2[10],attacks[10],runleft2[10],attackleft[10],fireleft[10],enemywalk[8],enemyattack[8],chardead[10],enemywalkleft[8],enemyattackleft[8];
//run[10] array holds 10 images of the character moving right direction
//runleft[10] array holds 10 images of the character running left
//fires[10] array holds 10 images of the character throwing firepower in right direction
//fireleft array[10] array holds 10 images of the character throwing firepower in left direction
//jumps[10] array holds the images of the character jumping up & down
//attacks[10] array holds the image of the character using sword attack while facing right
//attackleft[10] array holds the image of the character using sword attack while facing left
//enemywalk[10] array holds the image of the character walking right direction
int image1,image2,i1,i2,i3,runindex,attackindex,swordindex,swordleftindex,runleftindex,attackleftindex,enemyrightindex,enemyattackindex,chardeadindex,enemywalkleftindex,enemyattackleftindex;
//image1,image2,i1,i2,i3 holds some images
//All the variable mentioned above whose name ends with "index" are the indexes of the arrays mentioned above 
int fx=Char_posX,fy=Char_posY;
int ex=enemy_posX,ey=enemy_posY;
bool attack=false,fireattackleft=false,enemyattackright=false,enemyattackleftside=false;
bool right2=false,enemyright=true;
bool lef2t=false,enemyleft=true;
bool jump=false,jumpup=false,jumpdown=false;//bool up=false;
int Char_jump=0;//bool down=false;
bool enemy_up=false;
bool enemy_down=true;
bool sword=false,swordleft=false;
bool fire=false;
bool stand=true,standleft=true;
int fire_speed=15/*Character's firepower speed*/,backgroundX=0,backgroundY=0;
bool fire2=false;
int fire2_speed=15;
int Char_life=0;//life if the character
//::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::END OF VARIABLE DECLARATION:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://
#endif