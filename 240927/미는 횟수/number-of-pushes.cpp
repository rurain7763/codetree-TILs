#include <iostream>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int sz = a.size();
    int cnt = 0;
    for(int i = sz - 1; i > 0; i--) {
        if(a == b) {
            cout << cnt;
            return 0;
        }
        a = a.substr(0, i);
        b = b.substr(1, i);
        cnt++;
    }
    cout << -1;
    return 0;
}