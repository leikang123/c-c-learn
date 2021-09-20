#include <iostream>
using namespace std;
int main() {
    int x = 12;
    const int *a = &x;
    int y = 34;
    const int *b = &y;
    cout << a << endl;
    cout << b << endl;



}
