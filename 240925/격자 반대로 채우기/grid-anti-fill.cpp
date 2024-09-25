#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    const int dy[] = {-1, 1};
    vector<vector<int>> bo(n, vector<int>(n));
    int dir = 0;
    int y = n - 1;
    int number = 1;
    for(int i = n - 1; i > -1; i--) {
        for(int j = 0; j < n; j++) {
            bo[y][i] = number;
            number++;
            y += dy[dir];
        }
        dir = (dir + 1) % 2;
        y += dy[dir];
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << bo[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}