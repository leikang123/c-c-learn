#include <iostream>
using  namespace std;

class test{
private :
    int i;
    float f;
    char ch;
public :
    test();
    test(int a, float b,char c) {
    i = a;
    f = b;
    c = ch;
}
friend ostream &operator << (ostream & output,test &a );
friend istream & operator >>  (istream & intput ,test & b);
};
ostream & operator << (ostream & output ,test & a){
    output << a.i << endl;
    output << a.f << endl;
    output << a.ch << endl;
    return output;
}
istream & operator >> (istream & intput,test & b){
    intput >> b.i ;
    intput >> b.f ;
    intput >> b.ch;
    return intput;
}
int main() {
 test A(12,34.6,'ASDF');
 cout << A;
 test B,C;
 cin >> B >> C;
 cout << B << C;

}
