#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> bo(n, vector<int>(n));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == 0 || j == 0) {
                bo[i][j] = 1;
            } else {
                bo[i][j] = bo[i - 1][j] + bo[i][j - 1] + bo[i - 1][j - 1];
            }
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << bo[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}