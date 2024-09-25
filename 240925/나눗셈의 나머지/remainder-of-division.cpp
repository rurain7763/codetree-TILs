#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int freq[10] = {0};
    while(a > 1) {
        freq[a % b]++;
        a /= b;
    }
    int ans = 0;
    for(int i = 0; i < 10; i++) {
        ans += freq[i] * freq[i];
    }
    cout << ans;
    return 0;
}