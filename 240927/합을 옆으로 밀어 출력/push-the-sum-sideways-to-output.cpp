#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        int v;
        cin >> v;
        sum += v;
    }
    string numStr = to_string(sum);
    cout << numStr.substr(1, numStr.size() - 1) + numStr[0];
    return 0;
}