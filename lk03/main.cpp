#include <iostream>
using namespace std;
int main() {
   int a = 10;
   int &b = a;
   int &c = b;
   int &d = a;
    cout<<"a id value" << a << endl;
    cout <<" b is value " << b << endl;
    cout << " c is value " << c << endl;
    cout << " d is value " << d << endl;
}
