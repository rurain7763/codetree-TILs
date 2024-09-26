#include <iostream>
using namespace std;

int main() {
    int mini = 987654321, maxi = 0;
    for(int i = 0; i < 3; i++) {
        string str;
        cin >> str;
        mini = min(mini, (int)str.size());
        maxi = max(maxi, (int)str.size());
    }
    cout << maxi - mini;
    return 0;
}