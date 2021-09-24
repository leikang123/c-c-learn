#include <iostream>
using namespace std;
class Max {
private :
    int a,b,c,d;
   int Maxi(int,int);
public :
    void Set(int,int,int,int);
   int Maxi();
}A[3];
int Max::Maxi(int x,int y) {
    return (x >y) ? x:y;
}
void Max::Set(int x1, int x2, int x3=0, int x4=0) {
    a = x1;
    b =x2;
    c = x3;
    d = x4;
}
int Max::Maxi() {
    int x = Maxi(a,b);
    int y = Maxi(c,d);
    return Maxi(x,y);

}
int main() {
    A[0].Set(12,34,67,13);
    A[1].Set(23,22,90,8);
    fot(int i=0;i<3;i++)
        cout << A[i].Maxi() << endl;


}
