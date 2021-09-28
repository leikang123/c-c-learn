#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a[] = {1,2,3,4,5,6,7,8};
    vector<int> va (a,a+4),vb(4);
    copy(va.begin(),va.end(), ostream_iterator<int>(cout,""));
   //  cout <<"va =" << endl;
    reverse_copy(va.begin(),va.end(),ostream_iterator<int>(cout,""));
    cout << endl;
    // va的数据复制给vb
    reverse_copy(va.begin(),va.end(),vb.begin());
    reverse_copy(vb.begin(),vb.end(),ostream_iterator<int>(cout,""));
    cout << endl;


}
