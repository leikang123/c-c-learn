#include <iostream>     //头文件
using namespace std;    //使用命名空间
int main() {            //互相引用
   int a = 10;
   int &b = a;
   int &c = b;
   int &d = a;
    cout<<"a id value" << a << endl;
    cout <<" b is value " << b << endl;
    cout << " c is value " << c << endl;
    cout << " d is value " << d << endl;
}
