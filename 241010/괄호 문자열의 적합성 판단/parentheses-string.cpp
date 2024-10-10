#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;
    int stk = 0;
    bool ans = true;
    for(char c : str) {
        if(c == '(') {
            stk++;
        } else {
            if(stk == 0) {
                ans = false;
                break;
            }
            stk--;
        }
    }
    ans = stk == 0;
    cout << (ans ? "Yes" : "No");
    return 0;
}