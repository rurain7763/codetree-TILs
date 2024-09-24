#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cout << "* ";
    }
    cout << '\n';

    if(n == 1) return 0;

    for(int i = 1; i <= n - 2; i++) {
        for(int j = 0; j < i; j++) cout << "* ";
        for(int j = 0; j < n - i - 1; j++) cout << "  ";
        cout << "*\n";
    }

    for(int i = 0; i < n; i++) {
        cout << "* ";
    }
    cout << '\n';
    
    return 0;
}