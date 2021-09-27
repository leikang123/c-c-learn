#include <iostream>
using namespace std;
class A {
private :
    int a,b;
public :
    A();
   A(int x,int y){
       x=a,y=b;
       cout << x <<"," << y << endl;

   }
};
class B :public A{

};
class C :public  B,public A{

};
class D:public C,public  B,public A{

};
class E :public D,public C,public B,public A{

};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
