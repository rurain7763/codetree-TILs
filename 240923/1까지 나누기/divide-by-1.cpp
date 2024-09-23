#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int div = 1;
    while(n > 1) {
        n /= div;
        div++;
    }
    cout << div - 1;

    return 0;
}