#include <iostream>
#include <tuple>
using namespace std;
tuple<int,double,string>f(){
    return make_tuple(1,2.3,"456");
}
int main(){
    auto [x,y,z] = f();
    cout << x << "," << y << "," << z << endl;
    return 0;
}