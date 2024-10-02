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
    for(int i = 1; i < n; i++) {
        for(int j = i; j > 0 && arr[j - 1] > arr[j]; j--) {
            int tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
        }
    }
    for(int v : arr) cout << v << " ";
    return 0;
}