#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;
    cout << "010-" << str.substr(9, 4) << "-" << str.substr(4, 4);
    return 0;
}