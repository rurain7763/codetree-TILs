#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int number = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < n; j++) {
            if(i & 1) number++;
            else number += 2;
            cout << number << " ";
        }
        cout << '\n';
    }
    return 0;
}