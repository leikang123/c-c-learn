#include <iostream>
using namespace std;
class A{
private :
    int x,y;
public :
    A(int a,int b){
     x =a;
     y=b;
     cout << "x=" << x << endl;
     cout << "y=" << y  << endl;

};
void Show(){
    cout << "show ....." << endl;
}
};
class B : public A{
private :
    int z,w;
public :
    B(int a,int b,int c,int d):A(a,b){
    c =z;d=w;
    cout << "c=" << endl;
    cout << "d=" << endl;

}
void Show(){
    cout << "show2......show2..." << endl;

}
};
class C : public B{
public:
    C(int a,int b,int c,int d): B(a,b,c,d) {
    }
        void Show(){
            B::Show();
            cout << "show3......." << endl;
    }
};

int main() {
   A la(2,3);
   la.Show();
   B lb(1,5,7,9);
   C lc (6,7,8,9);
   lc.Show();

}
