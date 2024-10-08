#include <iostream>
#include <vector>
using namespace std;

void heapify(vector<int>& arr, int cur) {
    int mini = cur;
    int left = cur * 2;
    int right = cur * 2 + 1;
    if(left < arr.size() && arr[left] < arr[mini]) {
        mini = left;
    }
    if(right < arr.size() && arr[right] < arr[mini]) {
        mini = right;
    }
    if(mini != cur) {
        swap(arr[cur], arr[mini]);
        heapify(arr, mini);
    }
}

void solve(vector<int>& arr) {
    for(int i = arr.size() / 2; i >= 1; i--) {
        heapify(arr, i);
    }
    int sz = arr.size();
    for(int i = 1; i < sz; i++) {
        cout << arr[1] << " ";
        swap(arr[1], arr[arr.size() - 1]);
        arr.pop_back();
        heapify(arr, 1);
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n + 1);
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    solve(arr);
    return 0;
}