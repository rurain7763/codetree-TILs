#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int v;
        cin >> v;
        if((v & 1) && (v % 3 == 0)) cout << v << '\n';
    }
    return 0;
}