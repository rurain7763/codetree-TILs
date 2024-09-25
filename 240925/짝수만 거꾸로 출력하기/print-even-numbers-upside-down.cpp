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
    for(int i = n - 1; i > -1; i--) {
        if(arr[i] & 1) continue;
        cout << arr[i] << " ";
    }
    return 0;
}