#include <iostream>
using namespace std;
class Point{
private :
    int x,y;
public :
    Point(int a,int b){
    x=a,y=b;
   cout << "POint ..." << endl;
}
void Showxy(){
    cout << "x=" << x << endl;
    cout << "y=" << y <<endl;
}
~Point(){
    cout <<"~~Point...." << endl;
}
};
class Res : public Point{
private :
    int H,W;
public :
    Res(int a,int b,int h,int w): Point(a,b){
    H=h,W=w;
    cout << "res.." <<  endl;
}
void Show(){
    cout << "H=" << endl;
    cout << "w=" << endl;
}
~Res(){
    cout << "~~~~Res....." << endl;
}
};
int main() {
   Res r(12,23,11,89);
   r.Show();
   r.Showxy();
   // 创建对象
   Point a(2,1);
   Res b(111,555,777,999);
   a.Showxy();
   // 不能调用子类的函数
  //  a.Show();
   b.Show();
   Point &ra = b;
   ra.Showxy();
   Point * p = &b;
   p ->Showxy();
   Res * q = &b;
   q ->Show();
   q -> Showxy();







}
