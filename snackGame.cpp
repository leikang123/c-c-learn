#include <iostream>   
#include <curses.h>
using namespace std;
bool gameOver;
const int width = 20;  
const int height = 20;
int x,y,fruitx,fruity,score;
enum eDirecton {STOP = 0,LEFT,RIGHT,UP,DOWN};
eDirecton dir;
// 贪吃蛇游戏
void Setrup()
{
gameOver =false;
dir = STOP;
x =width /2;
y =height /2;
fruitx = rand() % width;
fruity = rand() % height;
score = 0;
}
void Draw()
{
system("clear");
for(int i=0;i<width;i++)
    cout <<"#";
cout << endl;

  for(int i=0;i<width;i++)
  {
        for(int j=0;j<width;j++)
        {
            if(i == 0)
              cout <<"#";
            if( i==y && j==x)
             cout <<"0";
            else if(i ==fruity && j ==fruitx)
              cout << "F";
            else
            cout <<"";
            if(j == width-1)
            cout <<"#";

        }
        cout << endl;
    }
}
void Input()
{
if(_kbhitt())
{
    switch (_getch())
    {

    case 'a':
        dir =LEFT;
        break;
    case 'd':
        dir = RIGHT;
        break;
    case 'w':
        dir = UP;
        break;
    case 's':
       dir= DOWN;
        break;
    case 'x':
        gameOver =true;
        break;
    }
}
}
void Logic()
{
switch (dir)
{
    case LEFT:
    x--;
        break;
    case RIGHT:
    x++;
        break;
    case UP:
    y--;
       break;
    case DOWN:
    y++;
    break;
        default:
        break;
    }
}
int main()
{
    Setrup();
    while (!gameOver)
    {
       Draw();
       Input();
       Logic();

    }
    

    return 0;
}
