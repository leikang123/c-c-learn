#include <iostream>
using namespace std;
/**
 * 对象成员初始化：就是一个类中有其他类的对象成员函数
 * @return
 */
 // 定义本类以及对象成员
 class Car{
 private :
     int color;
 public :
     Car() {

         cout << " Not s id" << endl;
     }
     Car(int x):color(){
     cout << " You is largre" << endl;
 }
 ~ Car(){
    cout << "xigou hanshu " << endl;
}
 };
 class House{
 private :
     Car size;
     Car pize;
     int data;
 public :
     House() {
         cout << "yuis " << endl;
     }
     ~House(){
     cout << " das" << endl;
 }
 };
 House()::House():sizt(),pize(){
     data = k;
     cout << "input is hdg" << endl;
 }
int main() {
    House obj,anObj(5,6,10);
    cout << ""<< endl;

}
