#include <iostream>
using namespace std;

int main() {
    int prev = -1;
    for(int i = 0; i < 10; i++) {
        int v;
        cin >> v;
        if(v % 3 == 0) {
            cout << prev;
            return 0;
        }
        prev = v;
    }
    return 0;
}