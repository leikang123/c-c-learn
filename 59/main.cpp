#include <iostream>
using namespace std;
class Str{
private:
    char *st;
public :
    Str(char *s);
    Str(Str & s);
    Str & operator=(Str& a);
    Str& operator =(char *s);
    void print(){
        cout << st << endl;
    }
~Str(){
        delete st;
    }
};
Str ::Str(char * s) {
    st =new char[strlen(s)+1];
    strcpy(st,s);
}
Str ::Str(Str &s) {
    st =new char[strlen(s.st)+1];
    strcpy(st,s.st);
}
Str & Str ::operator=(Str &a) {
    if (this == &a)
        return * this;
    delete st;
    st =new char[strlen(a.st)+1];
    strcpy(st,a.st);
    return  *this;
}
Str & Str ::operator=(Str &s) {
    delete st;
    st = new char[strlen(s.st)+1];
    strcpy(st,s);
    return * this;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
