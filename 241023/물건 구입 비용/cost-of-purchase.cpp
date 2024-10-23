#include <iostream>
#include <vector>
using namespace std;

int n, p;
vector<pair<int, int>> arr;
int solve(int curCount, int curCost) {
    if(curCount >= n) {
        return curCost;
    }

    int ret = 987654321;
    for(int i = 0; i < p; i++) {
        pair<int, int> pa = arr[i];
        ret = min(ret, solve(curCount + pa.first, curCost + pa.second));
    }

    return ret;
}

int main() {
    cin >> n >> p;
    arr.resize(p);
    for(int i = 0; i < p; i++) {
        cin >> arr[i].first >> arr[i].second;
    }
    cout << solve(0, 0);
    return 0;
}