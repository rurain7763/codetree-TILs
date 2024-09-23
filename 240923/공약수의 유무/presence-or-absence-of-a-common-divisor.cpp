#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    bool found = false;
    for(int i = a; i <= b; i++) {
        int mini = min(i, 1920);
        for(int j = 2; j <= mini; j++) {
            if(i % j == 0 && 1920 % j == 0 && 2880 % j == 0) {
                found = true;
                break;
            }
        }
        if(found) break;
    }
    cout << found;
    return 0;
}