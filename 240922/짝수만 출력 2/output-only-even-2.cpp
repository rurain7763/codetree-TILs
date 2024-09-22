#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> b >> a;
    while(b >= a) {
        if(!(b & 1)) {
            cout << b << " ";
        }
        b--;
    }
    return 0;
}