#include <iostream>
#include <deque>
using namespace std;

int main() {
    string str, order;
    cin >> str >> order;
    deque<char> dq(str.begin(), str.end());
    for(char c : order) {
        if(c == 'L') {
            dq.push_back(dq.front());
            dq.pop_front();
        } else {
            dq.push_front(dq.back());
            dq.pop_back();
        }
    }
    for(char c : dq) {
        cout << c;
    }
    return 0;
}