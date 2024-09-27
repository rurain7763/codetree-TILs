#include <iostream>
using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;
    int a = 0, b = 0;
    for(char c : str1) {
        if(c >= '0' && c <= '9') a = a * 10 + (c - '0');
    }
    for(char c : str2) {
        if(c >= '0' && c <= '9') b = b * 10 + (c - '0');
    }
    cout << a + b;
    return 0;
}