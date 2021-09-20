#include <iostream>
/**
 *chan常量的指针
 */
using namespace std;

int main() {
    const int a = 12;
    const int * x = &a;
    int b = 23;
    const int *y = &b;
    cout << x << endl;
    cout <<  y << endl;

}
