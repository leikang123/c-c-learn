#include <iostream>
/**
 * 类和对象
 */
 using namespace std;
 // 定义类名，无括号,后跟类体;结束
 class car{
     // 定义访问权限
 private:
     // 定义数据类型函数
     int length();
 public:
     double gei();

 protected:
     char string();
     // 定义无返回值函数
     void sex(int a,int b);
     void get(double a,char b);
 };
 // 定义成员函数
 void car::sex(int a, int b) {
     // 给参数值
     a =2;b=3;
 }
 void car::get(double a, char b) {
     x=a;
     y=b;
 }
 int car::length() {
     cout << x << endl;
     cout << y << endl;


 }
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
