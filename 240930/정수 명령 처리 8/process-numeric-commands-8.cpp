#include <iostream>
#include <list>
using namespace std;

int main() {
    int n;
    cin >> n;
    list<int> li;
    while(n--) {
        string order;
        cin >> order;
        if(order == "push_back") {
            int v;
            cin >> v;
            li.push_back(v);
        } else if(order == "push_front") {
            int v;
            cin >> v;
            li.push_front(v);
        } else if(order == "pop_front") {
            cout << li.front() << '\n';
            li.pop_front();
        } else if(order == "pop_back") {
            cout << li.back() << '\n';
            li.pop_back();
        } else if(order == "size") {
            cout << li.size() << '\n';
        } else if(order == "empty") {
            cout << li.empty() << '\n';
        } else if(order == "front") {
            cout << li.front() << '\n';
        } else if(order == "back") {
            cout << li.back() << '\n';
        }
    }
    return 0;
}