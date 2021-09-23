#include <iostream>
using namespace std;
/**
 * 类的对象
 * Point A,B;
 * Point * p =&A;
 * Point &R = B
 * 访问对象成员
 * p -> Display();
 * R.Display();
 */
 // 定义类对象名Point
class Point{
    // 类对象的属性，成员以及函数参数，有私有的，有公开的，保护的
private :
    // 私有数据成员
    int x,y;
public  :
    // 公开成员函数带参数int 类型a,b
    void Setxy(int a, int b){
    x=a;y=b;
}
   void Move(int a,int b){
    x=x+a;y=y+b;
}
   void Display(){
    cout << "x=" << x << endl;
    cout << "y=" << y << endl;
}
// 返回值为int的成员函数
int getx(){
    return x;
}
int gety(){
    return y;
}
// 定义以分号结束
};
// 定义无返回值的print函数参数为类指针，重载函数
void print(Point * a){
    // 类对象指针可以访问对象成员，语法格式：对象指针名 ->对象成员名称
    a-> Display();
}
// 定义类引用重载函数
void print(Point &a){
    // 类对象访问对象成员
    a.Display();
}
// 主函数入口
int main(){
    // 类对象声明A，B
    Point A,B;
    // 声明类指针
    Point * p;
    // 声明类引用RA=A
    Point &RA =A;
    // 对象A给成员函数赋值
    A.Setxy(23,45);
    // 给对象B赋值
    B=A;
    // 类Point的指针指向B
    p=&B;
    // 指针P访问Setxy赋值
    p ->Setxy(112,115);
    // 显示值
    print(p);
    p ->Display();
    // RA对象访问Move函数并赋予值
    RA.Move(-90,24);
    // 显示值
    print(A);
    print(&A);

}
