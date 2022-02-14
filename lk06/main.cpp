#include <iostream>     //声明头文件
#include <algorithm>    //声明算法标准库文件
using namespace std;
int main() {
    double a[]={1.1,2.2,3.3,4.4,5.5};       //定义数组double型
    int b[4];                               //定义数组
    copy(a,a+4, ostream_iterator<double>(cout," "));    //调用算法库文件
    cout <<endl;
    reverse_copy(a,a+4, ostream_iterator<double>(cout," "));
    cout << endl;
    copy(a,a+4,b);
    copy(b,b+4,ostream_iterator<double>(cout," "));
    cout << endl;
    sort(a,a+4);
    copy(a,a+4,ostream_iterator<double>(cout," "));
    cout <<endl;
    reverse_copy(a,a+4,b);
    copy(b,b+4,ostream_iterator<double>(cout," "));
    cout << endl;

int x =58,y=98,z=55;
int * const p = &x;
* p=65;
z = *p;
cout << p << endl;

}
