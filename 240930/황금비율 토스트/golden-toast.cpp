#include <iostream>
#include <list>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    string str;
    cin >> str;
    list<char> li(str.begin(), str.end());
    li.push_front('0');
    auto it = li.end();
    while(m--) {
        char order;
        cin >> order;
        if(order == 'L') {
            if(it != li.begin()) {
                it--;
            }
        } else if(order == 'R') {
            if(it != li.end()) {
                it++;
            }
        } else if(order == 'D') {
            if(it != li.end()) {
                it = li.erase(it);
            }
        } else if(order == 'P') {
            char c;
            cin >> c;
            li.insert(it, c);
        }
    }
    for(auto it1 = ++li.begin(); it1 != li.end(); it1++) {
        cout << *it1;
    }
    return 0;
}