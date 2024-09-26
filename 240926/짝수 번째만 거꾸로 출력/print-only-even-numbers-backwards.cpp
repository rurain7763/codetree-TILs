#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;
    for(int i = str.size() - 1; i > -1; i--) {
        if(i & 1) {
            cout << str[i];
        }
    }
    return 0;
}