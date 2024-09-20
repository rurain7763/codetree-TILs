#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << (n < 5 ? "tiny" : to_string(n * n));
    return 0;
}