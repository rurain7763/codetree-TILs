#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    int digitCnt = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        digitCnt = max(digitCnt, (int)log10(arr[i]) + 1);
    }
    int pos = 1;
    for(int i = digitCnt; i > 0; i--) {
        vector<vector<int>> newArr(10);
        for(int j = 0; j < arr.size(); j++) {
            int digit = (arr[j] / pos) % 10;
            newArr[digit].push_back(arr[j]);
        }
        arr.clear();
        for(int j = 0; j < 10; j++) {
            for(int k = 0; k < newArr[j].size(); k++) {
                arr.push_back(newArr[j][k]);
            }
        }
        pos *= 10;
    }
    for(int v : arr) cout << v << " ";
    return 0;
}