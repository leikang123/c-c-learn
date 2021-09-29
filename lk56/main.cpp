#include <iostream>
using namespace  std;
class A{
private :
    int x,y;
public :
    A(int a,int b){
    a  =x,y=b;
}
virtual int display( ){
    return 0;
}
};
class B :public A{
private :
    int z;
public :
    B(int a,int b,int c):A(a,b){
    z =c;
}
 int display(){
    return z;
}
};
void sad(A *p) {
    cout << p->display() << endl;

}
void sad(A &q){
    cout << q.display() << endl;

}
int main() {
    A a(2,3);
    B b(5,7,8);
    A * p =&b;
    A & q =b;
    sad(a);
    sad(p);
    sad(q);
}
