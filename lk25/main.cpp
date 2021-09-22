#include <iostream>
using namespace  std;
// string类对象函数参数,两个参数都是字符串
void swap(string,string);
// 主函数定义行参数
int main(){
    // 定义实参数str1,str2
    string str1("leikang");
    string str2("wangli");

    cout << "str1= " <<  str1 << endl;
    cout << "str2= " <<str2 << endl;
    // 传递值的方式，把str1,str2得值传到此函数中，变成swap("leikang","wangli"),为的是给函数的行参数传值
    swap(str1,str2);
}
// 要交换的函数参数
void swap(string s1,string s2){
    // 交换值
    string tem = s1;
    s1 = s2;
    s2 = tem;
    cout <<"s1= "<< s1 << endl;
    cout << "s2= " << s2 << endl;

}

