#include <iostream>
#include <fstream>
using namespace std;
int main() {
    char ch[15], *p = "abcdefghij";
    ofstream myFile;
    myFile.open("text.txt");
    myFile << p;
    myFile.close();
    ifstream getText("Text.txt");
    for (int i = 0; i < strlen(p) + 8; i++) {
        getText >> ch[i];
        ch[i] = '\0';
        getText.close();
        cout << ch;
    }

}