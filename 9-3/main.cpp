#include <iostream>
using namespace std;
class number {
    int num;
public :
    number (int i){
    num  =i;
}
int operator ++();
int operator++(int );
void print(){
    cout << "num =" << num << endl;
}
};
int number ::operator++() {
    num++;
    return num;
}
int number ::operator++(int ) {
    int i =num ;
    num++;
    return i;

}
int main() {
  number n(10);
  int i = ++n;
  cout << "i=" << i << endl;
  n.print();
  i = n++;
  cout << "i=" << i << endl;
  n.print();
}
