#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int number = 0;
    for(int i = 0; i < n; i++) {
        int j;
        for(j = 0; j < i; j++) {
            cout << "  ";
        }
        for(; j < n; j++) {
            cout << char('A' + number) << " ";
            number = (number + 1) % 26;
        }
        cout << '\n';
    }
    return 0;
}