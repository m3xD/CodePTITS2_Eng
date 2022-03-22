#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    int arr[1001],z=1;
    for (int i = 1; i <= 1666; ++i) {
        if (i%3!=0&&i%10!=3) {
            arr[z]=i;
            z++;
        }
    }
    cout << arr[a];
    return 0;
}
