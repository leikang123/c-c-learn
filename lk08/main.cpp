#include <iostream>
using namespace std;
int main() {
    string str = "wearhere", str2(str);
    reverse(str.begin(), str.end());
    cout << str << endl;
    copy(str.begin(),str.end(),str2.begin());
    sort(str.begin(),str.end());
    cout << str << endl;
    cout << str2 << endl;
    reverse_copy(str.begin(),str.end(),str2.begin());
    cout << str2 << endl;

    reverse(str2.begin()+2,str2.begin()+8);
    copy(str2.begin()+2,str2.begin()+8,ostream_iterator<char>(cout));
    cout << endl;


    cout << "the end++++++++++++++++" << endl;
    string str3 [] ={"leikang","wangxiang","liyuty"};
    for(int i=0;i<3;i++){
        copy(str3[i].begin(),str3[i].end(),ostream_iterator<char>(cout));
        cout << str3 << endl;

        str3[0].swap(str3[1]);
        str3[0].swap(str3[2]);
        for(int i =0;i<3;i++){
            cout << str[i]<< endl;
        }
    }

}