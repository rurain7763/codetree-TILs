#include <iostream>
using namespace std;

int main() {
    int a, n;
    cin >> a >> n;
    int sum = a;
    for(int i = 0; i < n; i++) {
        sum += n;
        cout << sum << '\n';
    }
    return 0;
}