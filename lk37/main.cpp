#include <iostream>
using namespace std;
// 定义两个类
class Point{
private :
    int x,y;
public :
    void Set(int a,int b){
    x=a,y=b;
}
int Getx(){
    return x;
}
int Gety(){
    return y;
}
};
class Rectangle{
    Point Loc;
    int H,W;
public :
    void Set(int x,int y,int h,int w);
    Point * getLoc();
    int Getheight(){
        return H;
    }
    int Getweight(){
        return W;
    }
};
void Rectangle::Set(int x, int y, int h, int w) {
    Loc.Set(x,y);
    H=h,W =w;
}
int main() {
   Rectangle rect;
   rect.Set(10,2,25,20);
   cout << rect.Getheight() << endl;
   cout << rect.Getweight() << endl;
   Point * p = rect.getLoc();
   cout << p ->Getx() << "," << p ->Gety() << endl;
}
