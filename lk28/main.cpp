#include <iostream>
/**
 * 返回引用的函数
 * @return
 */
using namespace std;
// 定义数组a
int a  =1;
// 声明返回引用的函数
int& index(int i);
int main() {
    index(3) = 16;
    cout << index(3) << endl;

}
// 函数的定义
int& index(int i){
return a;
}
