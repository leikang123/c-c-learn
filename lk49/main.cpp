#include <iostream>
using namespace std;
// 设计一个模版类，在设计一个模版类，它们形成继承关系
template < class T>
class Point{
    T x,y;
public:
    Point(T a,T b){
        x =a,y =b;
    }
    void display(){
        cout << x << "," << y << endl;
    }
};
template <class T>
class Line :public Point<T >{
    T x2,y2;
public :
    Line(T a,T b, T c,T d): Point<T>(a,b){
    x2 =c,y2=d;
}
void display(){
    Point <T>::display();
    cout << x2 <<"," << y2 << endl;
}
};
int main() {
  Point<int > a(1,9);
  a.display();
  Point<double> b(23.5,45.7);
  b.display();
  Line<int> c (11,22,33,44);
  c.display();
  Line<float> d(2.3,4.5,6.7,9.9);
  d.display();
}
