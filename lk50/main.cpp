#include <iostream>
#include <vector>

using namespace  std;
int main() {
    int a [] ={1,2,3,4,5,67,8};
    vector <int > va(a,a+4),vb(4);
    // 声明范型指针 x
    typedef vector<int> :: iterator x;
    x first = va.begin();
    for(first;first <va.end();first++)
        cout << * first <<" ";
        for( -- first;first >va.begin() -1;first --)
            cout << * first << " ";
    copy(va.begin(),va.end().ostream_x <int>(cout));
    cout << endl;






}
