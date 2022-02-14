#include <iostream>
using  namespace std;
class Two;
class One{
    private:
     int x;
    public:
     One(int a){
         x=a;
     }
    int Getx(){return x;}
    void func( Two& );
};
class Two{
    private:
      int y;
    public:
      Two(int b){y = b;}
      int Gety(){return y;}
      friend void One :: func( Two& );
};
void One :: func( Two& r)
{r.y = x;}
int  main(){
    One Obj1(5);
    One Obj2(8);
    cout <<Obj1.Getx() <<endl;
    cout <<Obj1.Gety() << endl;

}