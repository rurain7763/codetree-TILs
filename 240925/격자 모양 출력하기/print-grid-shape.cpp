#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> bo(n, vector<int>(n, 0));
    for(int i = 0; i < m; i++) {
        int r, c;
        cin >> r >> c;
        bo[r - 1][c - 1] = r * c;
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << bo[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}