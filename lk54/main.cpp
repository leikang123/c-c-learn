#include <iostream>
#include <vector>
using namespace std;

int main() {
  char a[10]="qwertyuio";
  // defin vector
    vector<char > b (a,a+10);
    for (int i=0;i<12;i++)
        cout << b[i] << "," ;
        cout <<endl;
        //defin charper
        vector<char> :: iterator p;
        p = b.begin();
        b.insert(p+3,'L');
        copy(b.begin(),b.end(),ostream_iterator<char>(cout,""));
        cout << endl;
        p =b.begin();
        b.insert(p,3,'K');
    copy(b.begin(),b.end(),ostream_iterator<char>(cout,""));
    cout << endl;
    cout << b.size()<< "," << b.capacity() << endl;
    p =b.begin();
    b.insert(p,10,'L');
    copy(b.begin(),b.end(),ostream_iterator<char>(cout,""));
    cout << endl;
    cout << b.size() << "," << b.capacity()<< endl;
    b.erase(p+8);
    copy(b.begin(),b.end(),ostream_iterator<char>(cout,""));
    cout << endl;



}

