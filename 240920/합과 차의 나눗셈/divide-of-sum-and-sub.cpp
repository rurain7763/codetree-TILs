#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << round((a + b) / (float)(a - b) * 100) / 100;
    return 0;
}