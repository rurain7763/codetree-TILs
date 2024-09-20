#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int solve(int n, vector<int>& selected) {
    if(selected.size() == n) {
        unordered_map<int, int> ma;
        for(int v : selected) ma[v]++;
        
        if(ma.size() == 1) {
            return n % selected[0] ? 0 : 1;
        } else {
            for(pair<int, int> pa : ma) {
                if(pa.first != pa.second) {
                    return 0;
                }
            }
        }

        return 1;
    }

    int ret = 0;
    for(int i = 1; i <= 4; i++) {
        selected.push_back(i);
        ret += solve(n, selected);
        selected.pop_back();
    }

    return ret;
}

int main() {
    int n;
    cin >> n;
    vector<int> selected;
    cout << solve(n, selected);
    return 0;
}