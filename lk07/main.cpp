#include <iostream>
using namespace std;
struct  student {
    void Setxy(double a,double b){
        x=a;
        y=b;
    }
    void Display(){
        cout << x << "\t" << y << endl;
    }
    double x,y;
};
int main() {
    student a;
    a.Setxy(10.6,18.5);
    a.Display();
    cout << a.x <<"\t" <<a.y << endl;
}
