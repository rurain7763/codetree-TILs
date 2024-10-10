#include <iostream>
#include <deque>
using namespace std;

int main() {
    int n;
    cin >> n;
    deque<int> dq;
    while(n--) {
        string order;
        cin >> order;
        if(order == "push_front") {
            int v;
            cin >> v;
            dq.push_front(v);
        } else if(order == "push_back") {
            int v;
            cin >> v;
            dq.push_back(v);
        } else if(order == "pop_front") {
            cout << dq.front() << '\n';
            dq.pop_front();
        } else if(order == "pop_back") {
            cout << dq.back() << '\n';
            dq.pop_back();
        } else if(order == "size") {
            cout << dq.size() << '\n';
        } else if(order == "empty") {
            cout << dq.empty() << '\n';
        } else if(order == "front") {
            cout << dq.front() << '\n';
        } else if(order == "back") {
            cout << dq.back() << '\n';
        }
    }
    return 0;
}