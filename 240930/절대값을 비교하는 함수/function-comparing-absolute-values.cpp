#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--) {
        int a, b;
        cin >> a >> b;
        a = abs(a);
        b = abs(b);
        cout << (a > b ? a : b) << '\n';
    }
    return 0;
}