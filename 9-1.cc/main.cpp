#include <iostream>             //头文件，表示标准库，输入输出对像
#include <string>               //头文件，表示字符标准库
using namespace std;            //使用命名空间
class str{
private:
    char *st;
public :
    str( char * s);
    str( str & s);
    str& operator = (str& a);
    str& operator = (char *s);
    void print(){
        delete st;
    }
};
str::str(char *s){
    st = new char[strlen(s) +1];
    strcpy(st,s);

}
str :: str(str & a){
    st = new char[strlen(a.st)+1];
    strcpy(st,a.st);

}
str& str ::operator=(str &a) {
    if (this == & a)
        return * this;
    delete st;
    st = new char[strlen(a.st)+1];
    strcpy(st,a.st);
    return * this;
}
str& str :: operator=(char  &s) {
    delete st;
    st = new char[strlen(s)+1];
    strcpy(st,s);
    return * this;
}

int main() {
    str s1 ("we"),s2("They"),s3(s1);
    s1.print();
    s2.print();
    s3.print();
    s2=s1=s3;
    s3=" go home";
    s3 = s3;
    s1.print();
    s2.print();
    s3.print();
}
