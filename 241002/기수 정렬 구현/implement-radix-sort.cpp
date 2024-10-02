#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    int maxi = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        maxi = max(maxi, arr[i]);
    }
    int digitCnt = (int)log10(maxi) + 1;
    int pos = 1;
    for(int i = digitCnt; i > 0; i--) {
        vector<vector<int>> newArr(10);
        for(int j = 0; j < arr.size(); j++) {
            int digit = (arr[j] / pos) % 10;
            newArr[digit].push_back(arr[j]);
        }
        int idx = 0;
        for(int j = 0; j < 10; j++) {
            for(int k = 0; k < newArr[j].size(); k++) {
                arr[idx++] = newArr[j][k];
            }
        }
        pos *= 10;
    }
    for(int v : arr) cout << v << " ";
    return 0;
}