#include <iostream>
# include <vector>

using namespace std;

int main() {
    // defin char 10
    char as[11] ="adfgkirtoc";
    // 向量复制数组的字符10
    vector<char>a (as,as+10);
    // 遍历向量a
    for(int i =0;i<10;i++)
        cout << a[i] << " ";
    cout << endl << a.capacity()<<"," << a.size()<< "," <<a.max_size()<<endl;
    a.push_back('l');
    a.push_back('w');
    a.pop_back();
    for(int i=0;i<13;i++)
        cout << a[i] << "," ;
    cout << a.capacity()<<"," << a.size()<<endl;
   a.clear();
   for(int i=0;i<16;i++)
       cout << a[i] << "," ;
   a.clear();
   cout << a.empty() <<endl;
}
