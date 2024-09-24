#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int number = 9;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << number;
            if(--number < 1) number = 9;
        }
        cout << '\n';
    }
    return 0;
}