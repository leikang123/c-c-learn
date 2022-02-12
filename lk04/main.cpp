#include <iostream>
/**
 *chan常量的指针
 */
using namespace std;        //使用命名空间
/*主函数*/
int main() {
    const int a = 12;       //定义常量
    const int * x = &a;     //定义指针常量并初始化引用
    int b = 23;             //定义变量b
    const int *y = &b;      //定义指针常量引用
    cout << x << endl;
    cout <<  y << endl;

}
