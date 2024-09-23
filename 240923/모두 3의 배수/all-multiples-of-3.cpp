#include <iostream>
using namespace std;

int main() {
    bool b = true;
    for(int i = 0; i < 5; i++) {
        int v;
        cin >> v;
        if(v % 3) b = false;
    }
    cout << b;
    return 0;
}