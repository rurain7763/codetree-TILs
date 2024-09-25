#include <iostream>
using namespace std;

int main() {
    int bo[4][4];
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> bo[i][j];
        }
    }
    int ans = 0;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j <= i; j++) {
            ans += bo[i][j];
        }
    }
    cout << ans;
    return 0;
}