#include <iostream>
using namespace std;

int main() {
    string ans;
    for(int i = 0; i < 2; i++) {
        string str;
        getline(cin, str);
        for(char c : str) {
            if(c != ' ') ans += c;
        }
    }
    cout << ans;
    return 0;
}