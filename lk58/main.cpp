#include <iostream>
using namespace std;
class A {
public :
    virtual void f(){
    cout << "A is " << endl;
}
};
class B{
    virtual void f(){
        cout << "B is " << endl;
    }
};
class C :public B ,public A{
     void f(){
        cout << " c is " << endl;
    }
};

int main() {
  // C c;
   A *pa ;
   B *pb ;
   C *pc,c;
  pa =&c,pb=&c,pc=&c;
  pa->f();
  pb ->f();
  pc ->f();
}
