#include <iostream>
# include <vector>
using namespace std;
int main() {
    vector<char>a(10),b(10);
    cout << a.empty() << "," << sizeof (a) <<",";
    for( char i ='a',j =0;j <10;j++)
        a[j] =i+j;
    cout << a.max_size() << "," << a.capacity() <<"," << a.size() << endl;
    for(j=0;j<10;j++)
        cout << a[j] << " ";
    cout << endl;
    copy (a.begin(),a.end(),b.begin());
    copy(a.begin(),a.end(),ostream_iterator<char>(cout,""));
    cout << endl;
    reverse_copy(b.begin(),b.end(),ostream_iterator<char>(cout,""));
}
