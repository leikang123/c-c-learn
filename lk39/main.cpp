#include <iostream>
#include <cmath>
using namespace std;
class Point{
private :
    double x,y;
public :
    Point(double xi,double yi){
    x =xi,y = yi;
}
double Getx(){
    return x;
}
double Gety(){
    return y;
}
// 友元函数
friend double distances(Point&,Point&);
};
double distances(Point& a,Point& b){
    double Getx = a.x-b.x;
    double Gety = a.y-b.y;
    return sqrt(xi*xi+yi*yi);
}
int main() {
  Point p1(3.5,5.5),p2(4.5,6.5);
  cout << " The diantances is " << distances(p1,p2) << endl;
}
