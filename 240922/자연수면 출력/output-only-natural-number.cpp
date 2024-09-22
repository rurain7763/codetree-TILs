#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if(a < 1) {
        cout << 0;
    } else {
        for(int i = 0; i < b; i++) {
            cout << a;
        }
    }
    return 0;
}