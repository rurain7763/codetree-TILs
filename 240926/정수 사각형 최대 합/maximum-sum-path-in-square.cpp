#include <iostream>
#include <vector>
using namespace std;

int n;
int solve(vector<vector<int>>& bo, int x, int y) {
    if(x >= n || y >= n) return 0;
    int ret = solve(bo, x + 1, y) + bo[y][x];
    ret = max(ret, solve(bo, x, y + 1) + bo[y][x]);
    return ret;
}

int main() {
    cin >> n;
    vector<vector<int>> bo(n, vector<int>(n));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> bo[i][j];
        }
    }
    cout << solve(bo, 0, 0);
    return 0;
}