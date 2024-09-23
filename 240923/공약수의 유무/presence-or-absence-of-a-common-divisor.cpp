#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    bool found = false;
    for(int i = a; i <= b; i++) {
        if(1920 % i == 0 && 2880 % i == 0) {
            found = true;
            break;
        }
    }
    cout << found;
    return 0;
}