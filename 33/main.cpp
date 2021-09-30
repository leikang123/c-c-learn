#include <iostream>
using namespace std;
/**
 * g构造函数的学习法
 * @return
 */
 class Point{
 private :
     int x,y;
 // 公开的类成员函数
 public :
     // 无参数构造函数
     Point();
     // 有参数构造函数
     Point(int a,int b);
 };
 // 构造函数，无参数
 Point::Point():x(0),y(0) {
     cout << "init" << endl;
 }
 // 构造函数有参数
 Point::Point(int a, int b):x(a),y(b) {
     cout << "init " << a <<"," << b << endl;
 }
int main() {
     // 声明对象A，无参数
    Point A;
    // 声明对象B有参数
    Point B(13,45);
    // 声明对象数组，两个元素无参数
    Point C[2];
    // 声明类对象D数组有参数两个元素
    Point D[2] = {
            Point(6,9),Point(12,17)
    };
}
