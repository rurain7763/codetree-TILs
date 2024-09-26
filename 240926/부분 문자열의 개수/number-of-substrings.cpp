#include <iostream>
using namespace std;

int main() {
    string str;
    string sub;
    cin >> str >> sub;
    int ans = 0;
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == sub[0] && str.size() - i >= sub.size()) {
            int j;
            for(j = 1; j < sub.size(); j++) {
                if(str[i + j] != sub[j]) break;
            }
            if(j == sub.size()) ans++;
        }
    }
    cout << ans;
    return 0;
}