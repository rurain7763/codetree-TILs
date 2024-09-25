#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    for(int i = 1; i <= n; i++) {
        int v;
        cin >> v;
        if(v == 2 && (++cnt >= 3)) {
            cout << i;
            return 0;
        }
    }
    return 0;
}