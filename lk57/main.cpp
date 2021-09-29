#include <iostream>
using namespace std;
class A{
private :
    int x;
public :
    // 构造函数无参数
    A(){};
// 虚函数
virtual void func(){
    cout << "virtual void func" << endl;
}
// 析构函数
~A(){
    cout << "~A " << endl;
}
// 虚函数
virtual void fund(){
    cout << "virual void fund" << endl;
}
};
class B : public A {
public :
    // 构造函数无参数
    B(){
    func();
}
void fun(){
    cout << "fun " << endl;
}
~B(){
    fund();
}
};
class C :public B{
public :
    C(){}
    void func(){
    cout << "class C func " << endl;
}
~C(){
    fund();
}
void fund(){
    cout << " c fund" << endl;
}
};
int main() {
    C c;
    c.fun();
}
