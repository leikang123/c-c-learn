#include <iostream>
using namespace std;
/*结构体函数*/
struct  student {       
    void Setxy(double a,double b){
        x=a;
        y=b;
    }
    void Display(){
        cout << x << "\t" << y << endl;
    }
    double x,y;
};
int main() {
    /*初始化结构体*/
    student a;
    a.Setxy(10.6,18.5);         //结构体对象调用成员函数
    a.Display();
    cout << a.x <<"\t" <<a.y << endl;
}
