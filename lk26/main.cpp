#include <iostream>
using namespace std;
// 定义对象指针，string类的指针
void swap (string *,string *);
int main() {
    string str1("leikang");
    string str2("wangli");
    cout << "str1=" << str1 << endl;
    cout << "str2=" << str2 << endl;
    // 传递指针
    swap(&str1,&str2);
}
void swap(string *s1 ,string *s2){
    string tem = *s1;
    *s1 =*s2;
    *s2 = tem;
    cout << "s1=" << *s1 << endl;
    cout << "s2=" << *s2 << endl;
}
