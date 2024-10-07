#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;
    stack<int> stk;
    while(n--) {
        string order;
        cin >> order;
        if(order == "push") {
            int v;
            cin >> v;
            stk.push(v);
        } else if(order == "pop") {
            cout << stk.top() << '\n';
            stk.pop();
        } else if(order == "size") {
            cout << stk.size() << '\n';
        } else if(order == "empty") {
            cout << (stk.empty()) << '\n';
        } else if(order == "top") {
            cout << stk.top() << '\n';
        }
    }
    return 0;
}