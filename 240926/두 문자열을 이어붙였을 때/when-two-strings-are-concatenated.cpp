#include <iostream>
using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;
    cout << (str1 + str2 == str2 + str1 ? "true" : "false");
    return 0;
}