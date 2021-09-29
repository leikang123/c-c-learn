#include <iostream>
using namespace std;
 class A{
 private:
     int x,y;
 public :
     A(int a,int b){
     x=a,y=b;
 }
     void  display(){
      cout << "hello world" << endl;
 }
 int display2(){
     return 0;
 }
 };
class B :public A{
private:
    int rdio;
public :
    B(int a,int b,int c):A(a,b){
        rdio =c;
}
int display(){
    return rdio *rdio*rdio;
}
int display2(){
    return rdio*rdio*rdio;
}
};

int main() {
    // 初始化母类和派生类
    A a(2,3);
    B b(5,7,9);
    cout << "a.dis" <<a.display2()<< endl;
    cout << b.display2() << endl;
    cout << b.display() << endl;
    // 定义a指针初始化
    A *p = &b;
    cout <<"p->disp2" <<  p ->display2() << endl;
     B * p2 =&b;
     cout << p2 ->display() << endl;
     cout << p2 ->display2() << endl;
     // 定义引用
     A &q = b;
     cout << q.display2()<< endl;
    // cout << q.display() << endl;
    B &q2 = b;
    cout << q2.display() << endl;
    cout << q2.display2() << endl;


}
