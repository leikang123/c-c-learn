#include <iostream>
using namespace std;
void swap(string&,string&);
int main() {
    string str1("leikang");
    string str2("wangli");
    cout << "str1="<< str1 << endl;
    cout << "str2=" << str2 << endl;
    swap(str1,str2);
}
void swap(string &s1,string &s2){
    string tem =s1;
    s1 =s2;
    s2 = tem;
    cout << "s1 = " << s1 << endl;
    cout << "s2=" << s2 << endl;
}