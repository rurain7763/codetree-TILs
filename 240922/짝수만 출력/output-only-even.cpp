#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    while(a <= b) {
        if(!(a & 1)) {
            cout << a << " ";
        }
        a++;
    }
    return 0;
}