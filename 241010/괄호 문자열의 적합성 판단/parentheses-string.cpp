#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;
    int stk = 0;
    for(char c : str) {
        if(c == '(') {
            stk++;
        } else {
            if(stk == 0) {
                cout << "No";
                return 0;
            }
            stk--;
        }
    }
    cout << (stk == 0 ? "Yes" : "No");
    return 0;
}