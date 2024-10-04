#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = high;
    int i = low - 1;
    for(int j = low; j < high; j++) {
        if(arr[j] <= arr[pivot]) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[pivot]);
    return i + 1;
}

void sort(vector<int>& arr, int low, int high) {
    if(low < high) {
        int pos = partition(arr, low, high);
        sort(arr, low, pos - 1);
        sort(arr, pos + 1, high);
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, 0, n - 1);
    for(int v : arr) cout << v << " ";
    return 0;
}