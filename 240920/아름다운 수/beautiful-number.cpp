#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int solve(int n, vector<int>& selected) {
    if(selected.size() == n) {
        int cur = selected[0];
        int cur_cnt = 1;
        for(int i = 1; i < selected.size(); i++) {
            if(selected[i] == cur) {
                cur_cnt++;
            } else {
                if(cur_cnt == cur || cur_cnt % cur == 0) {
                    cur = selected[i];
                    cur_cnt = 1;
                } else {
                    return 0;
                }
            }
        }

        return cur_cnt == cur || cur_cnt % cur == 0 ? 1 : 0;
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