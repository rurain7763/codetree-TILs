#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;
    bool b = true;
    string ans;
    for(int i = 0; i < str.size(); i++) {
        if(b && str[i] == 'e') {
            b = false;
            continue;
        }
        ans += str[i];
    }
    cout << ans;
    return 0;
}