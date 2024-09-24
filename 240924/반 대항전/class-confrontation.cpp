#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[] = {0, 0, 0, 0};
    for(int i = 0; i < 4; i++) {
        string str;
        cin >> str;
        for(int j = 1; j <= n; j++) {
            int v;
            cin >> v;
            arr[i] += v;
        }
    }
    int maxi = 0;
    for(int i = 0; i < 4; i++) {
        cout << char('A' + i) << " - " << arr[i] << '\n';
        if(arr[i] > maxi) {
            maxi = i;
        }
    }
    cout << "Class " << char('A' + maxi) << " is winner!";
    return 0;
}