#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    char prefix;
    cin >> prefix;
    int sum = 0;
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i][0] == prefix) {
            sum += arr[i].size();
            cnt++;
        }
    }
    cout << cnt << " " << fixed << std::setprecision(2) << sum / (float)cnt;
    return 0;
}