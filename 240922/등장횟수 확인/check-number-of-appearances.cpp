#include <iostream>
using namespace std;

int main() {
    int ans = 0;
    for(int i = 0; i < 5; i++) {
        int v;
        cin >> v;
        if(v % 2 == 0) ans++;
    }
    cout << ans;
    return 0;
}