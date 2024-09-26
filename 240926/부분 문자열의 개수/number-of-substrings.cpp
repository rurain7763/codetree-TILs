#include <iostream>
using namespace std;

int main() {
    string str;
    string sub;
    cin >> str >> sub;
    int pos;
    int ans = 0;
    while((pos = str.find(sub)) != string::npos) {
        str.erase(pos, sub.size());
        ans++;
    }
    cout << ans;
    return 0;
}