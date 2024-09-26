#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;
    char c = str[1];
    for(int i = 1; i < str.size(); i++) {
        if(str[i] == c) str[i] = str[0];
    }
    cout << str;
    return 0;
}