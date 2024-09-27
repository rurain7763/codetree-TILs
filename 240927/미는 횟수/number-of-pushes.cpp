#include <iostream>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int sz = a.size();
    for(int i = sz - 1; i > 0; i--) {
        if(a == b) {
            cout << i + 1;
            return 0;
        }
        a = a.substr(0, i);
        b = b.substr(1, i);
    }
    cout << -1;
    return 0;
}