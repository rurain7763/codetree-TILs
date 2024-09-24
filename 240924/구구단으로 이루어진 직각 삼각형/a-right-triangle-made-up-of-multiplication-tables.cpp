#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        int j;
        for(j = 0; j < n - i; j++) {
            cout << i << " * " << j + 1 << " = " << i * (j + 1) << " / "; 
        }
        cout << i << " * " << j + 1 << " = " << i * (j + 1) << '\n';
    }
    return 0;
}