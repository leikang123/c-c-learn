#include <iostream>
# include <string>
using namespace  std;
class number{
    int num;
public :
    number( int i){
    num =i;
}
friend int operator ++(number &);
friend int operator ++(number &,int );
void print(){
    cout << "num = " << num << endl;
}
};
int operator ++ (number & a){
    a.num++;
    return a.num++;
}
int operator ++(number & a ,int ){
    int i = a.num++;
    return i;
}
int main() {
    number n(19);
    int i= ++n;
    cout << "i=" <<i << endl;
    n.print();
    i =n++;
    cout << "i=" << i << endl;
    n.print();
}
