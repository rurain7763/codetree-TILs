#include <iostream>
#include <vector>
using namespace std;

void solve(int k, int n, vector<int>& selected) {
    if(selected.size() == n) {
        for(int v : selected) {
            cout << v << " ";
        }
        cout << '\n';
        return;
    }

    for(int i = 1; i <= k; i++) {
        selected.push_back(i);
        solve(k, n, selected);
        selected.pop_back();
    }
}

int main() {
    int k, n;
    cin >> k >> n;
    vector<int> selected;
    solve(k, n, selected);
    return 0;
}