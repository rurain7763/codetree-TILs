#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--) {
        int a, b;
        cin >> a >> b;
        int sum = 0;
        for(int i = a; i <= b; i++) {
            if(i & 1) continue;
            sum += i;
        }
        cout << sum << '\n';
    }
    return 0;
}