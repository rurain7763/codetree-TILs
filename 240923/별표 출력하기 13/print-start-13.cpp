#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int inc = 1;
    int dec = n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < dec; j++) {
            cout << "* ";
        }
        cout << '\n';
        for(int j = 0; j < inc; j++) {
            cout << "* ";
        }
        cout << '\n';
        inc++;
        dec--;
    }

    return 0;
}