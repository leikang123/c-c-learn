#include <iostream>
using namespace std;
class Car{
private :
   int x,y;
    char w,z;
public :
    ~Car();
    Car();
    Car(int a,int b);
    Car(char c,char d);
};
// 构造函数的赋予值
 Car::Car():x(0),y(0){
    cout << "init " << endl;
}
 Car::Car():w(),z(){
      cout << "init2 " << endl;
}
 Car::Car(int a,int b):x(2),y(4) {
     cout << "init "<< "x= " << x << endl;
     cout << "init " << "y= " << y << endl;
 }
Car ::~Car(){
     cout << "new is " << endl;
 }

 Car::Car(char c, char d):w('A'),z('L') {
     cout << "w=" << w << endl;
     cout << "z=" << z << endl;

 }
int main() {
    // 声明对象
   // Car A;
    Car B(12,15);
    Car C[2] ={Car(12,13),Car(21,22)
    };
    Car D('QQQQ','IOIOIO');
    Car * E;
    E = & D;
    Car F[4]={
            Car('WEI','YUT'),Car('yuyu','vggvg'),Car('leikang','mimi'),Car('xcdf','zxc')
    };
    Car * G ;
    // new
    Car  * ptr = new Car(29,30);
   //  Car  * prt2  = new Car('x','M');
    delete ptr;
    // delete ptr2;

}
