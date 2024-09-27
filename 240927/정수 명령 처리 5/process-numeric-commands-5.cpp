#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < n; i++) {
        string order;
        cin >> order;
        if(order == "push_back") {
            int v;
            cin >> v;
            arr.push_back(v);
        } else if(order == "get") {
            int v;
            cin >> v;
            cout << arr[v - 1] << '\n';
        } else if(order == "size") {
            cout << arr.size() << '\n';
        } else if(order == "pop_back") {
            arr.pop_back();
        }
    }
    return 0;
}