#include <iostream>
using namespace std;
template <class T,int size =4>
class A{
    T m[size];
public:
    A(T a,T b,T c,T d){
        m[0] =a,m[1] = b,m[2]=c,m[3]=d;
    }
    T S(){
        m[0]+m[1]+m[2]+m[3];
    }
};
int main() {
    A<int,4> num1(1,2,3,4);
    A<float,4> num2(2.3,4.6,7.9,1.1);
    A<char,4> num3('v','q',3,4);
    cout << num1.S() << "," << num2.S() << "," << num3.S() << endl;
}
