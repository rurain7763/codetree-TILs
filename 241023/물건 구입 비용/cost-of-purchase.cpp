#include <iostream>
#include <vector>
using namespace std;

int n, p;
vector<pair<int, int>> arr;
int dp[1001][2001];
int solve(int curCount, int curCost) {
    if(curCount >= n) {
        return curCost;
    }

    if(dp[curCount][curCost] != 987654321) return dp[curCount][curCost];

    int ret = 987654321;
    for(int i = 0; i < p; i++) {
        pair<int, int> pa = arr[i];
        ret = min(ret, solve(curCount + pa.first, curCost + pa.second));
    }

    return dp[curCount][curCost] = ret;
}

int main() {
    cin >> n >> p;
    arr.resize(p);
    for(int i = 0; i < 1001; i++) {
        for(int j = 0; j < 2001; j++) {
            dp[i][j] = 987654321;
        }
    }
    for(int i = 0; i < p; i++) {
        cin >> arr[i].first >> arr[i].second;
    }
    cout << solve(0, 0);
    return 0;
}