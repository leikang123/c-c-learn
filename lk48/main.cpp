#include <iostream>
using namespace std;
/**
 * 类模版继承母类，母类为非模版类
 */
class Point{
private :
    int x,y;
public :
    Point(int a,int b){
    x=a;y =b;
}
void display(){
    cout << x << "," << y << endl;
}
};
template <class T >
class Line : public Point{
    T x2,y2;
public:
    Line(int a ,int b,T c, T d): Point(a,b){
        x2=c;y2=d;
    }
    void display(){
        Point::display();
        cout << x2 <<"," << y2 << endl;
    }
};
int main() {
    Point a(3,8);a.display();
    Line <int> ab(4,5,6,7);
    ab.display();
    Line<double> ad(2,3,4.7,9.7);
    ad.display();
}
