#include <iostream>
#include <vector>
using namespace std;

int solve(vector<vector<int>>& cost, int n, vector<int>& selected) {
    if(selected.size() == n) {
        int sum = 0;
        for(int i = 0; i < selected.size(); i++) {
            sum += cost[i][selected[i]];
        }
        return sum;
    }

    int ret = 987654321;
    for(int i = 0; i < cost.size(); i++) {
        if(selected.size() && selected.back() == i) continue;
        selected.push_back(i);
        ret = min(ret, solve(cost, n, selected));
        selected.pop_back();
    }
    return ret;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> cost(3, vector<int>(3, 0));
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> cost[i][j];
        }
    }
    vector<int> selected;
    cout << solve(cost, n, selected);
    return 0;
}