#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ans = 987654321;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[j] - arr[i] < ans) {
                ans = arr[j] - arr[i];
            }
        }
    }
    cout << ans;
    return 0;
}