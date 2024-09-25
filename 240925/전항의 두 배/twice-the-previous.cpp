#include <iostream>
using namespace std;

int main() {
    int arr[11] = {0};
    cin >> arr[1] >> arr[2];
    for(int i = 3; i <= 10; i++) {
        arr[i] = arr[i - 1] + 2 * arr[i - 2];
    }
    for(int i = 1; i <= 10; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}