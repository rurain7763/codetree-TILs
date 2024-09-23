#include <iostream>
using namespace std;

int main() {
    int age;
    int sum = 0;
    int cnt = 0;
    while(cin >> age) {
        if(age < 20 || age > 29) break;
        sum += age;
        cnt++;
    }
    cout.precision(2);
    cout << fixed << sum / (float)cnt;
    return 0;
}