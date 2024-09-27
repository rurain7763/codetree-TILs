#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;
    int v = c - 'a';
    v = (v + 25) % 26;
    cout << char('a' + v);
    return 0;
}