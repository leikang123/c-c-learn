

// 是一个预处理的开始，处理器处理的地方，iostream是一个标准文件，输入输出的缩写
#include <iostream>
using namespace std;
typedef int arr[3];
int main(){
    arr a={1,3,5};
    arr &b = a;       //引用数组会报错
    cout << "b=" << b << endl;

}
