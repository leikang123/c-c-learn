#include <iostream>
using namespace  std;
/**
 * 方法重载
 * @return
 */
 // 求两个数据中最大的数据
int add(int num1=0,int num2 =0,int num3=0){
    return num1+num2+num3;
    //重载实力
    void printer(complex <int>);
    void  printer(complex <double>);

}
int main() {
    int i(0);
    complex <int> num1(2,3);
    complex <double > num2(3.5,4.5);
    printer(num1);
    printer(num2);
   cout <<"add=" << add(1,3,5) << endl;
   cout << "add(1,5)" << add(1,5) << endl;
   cout << "add(2,3,6)" << add(2,3,6);
   cout << max(2,5) << endl;
   cout << max(2.5,2.7) << endl;
   cout << max('w','a') << endl;
   cout << max("ABC","abc") << endl;
}
template <class T>
T max(T m1,T m2){
    return m1 > m2 ? m1:m2;

}
void printer(complex<int> a){

}