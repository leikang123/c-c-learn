#include <iostream>
using namespace std;
class Point {
private :
    int x,y;
public :
    ~Point();
    Point(int =0,int =0);
};
Point::Point(int a,int b) : x(a), y(b) {
    cout << "x=" << x << endl;
    cout << "y=" << y << endl;

}
Point::~Point() {
    cout << "itit" << endl;
}
int main() {
  Point *ptr = new Point[3];
    delete [] ptr;
}
