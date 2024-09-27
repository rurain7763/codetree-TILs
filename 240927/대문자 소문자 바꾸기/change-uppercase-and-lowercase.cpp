#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;
    for(char& c : str) {
        if(c >= 'a' && c <= 'z') c = toupper(c);
        else c = tolower(c);
    }
    cout << str;
    return 0;
}