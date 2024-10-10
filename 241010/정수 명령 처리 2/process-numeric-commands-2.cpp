#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n;
    cin >> n;
    queue<int> q;
    while(n--) {
        string order;
        cin >> order;
        if(order == "push") {
            int v;
            cin >> v;
            q.push(v);
        } else if(order == "pop") {
            cout << q.front() << '\n';
            q.pop();
        } else if(order == "size") {
            cout << q.size() << '\n';
        } else if(order == "empty") {
            cout << q.empty() << '\n';
        } else if(order == "front") {
            cout << q.front() << '\n';
        }
    }
    return 0;
}