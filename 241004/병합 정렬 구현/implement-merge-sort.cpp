#include <iostream>
#include <vector>
using namespace std;

void sort(vector<int>& arr, int low, int high) {
    if(low < high) {
        int mid = (low + high) / 2;
        sort(arr, low, mid);
        sort(arr, mid + 1, high);

        int i = low, j = mid + 1;
        vector<int> merged;
        while(i <= mid && j <= high) {
            if(arr[i] <= arr[j]) {
                merged.push_back(arr[i]);
                i++;
            } else {
                merged.push_back(arr[j]);
                j++;
            }
        }
        while(i <= mid) {
            merged.push_back(arr[i]);
            i++;
        }
        while(j <= high) {
            merged.push_back(arr[j]);
            j++;
        }
        for(int i = low; i <= high; i++) {
            arr[i] = merged[i - low];
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, 0, arr.size() - 1);
    for(int v : arr) cout << v << " ";
    return 0;
}