#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    cout << (a % 3 ? "NO" : "YES") << '\n';
    cout << (a % 5 ? "NO" : "YES") << '\n';
    return 0;
}