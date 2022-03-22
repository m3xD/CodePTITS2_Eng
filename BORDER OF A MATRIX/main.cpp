#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int a;
        cin >> a;
        int arr[a][a];
        for (int j = 0; j < a; ++j) {
            for (int k = 0; k < a; ++k) {
                cin >> arr[j][k];
            }
        }
        for (int j = 0; j < a; ++j) {
            for (int k = 0; k < a; ++k) {
                if (j==0 || j==a-1) {
                    cout << arr[j][k] << " ";
                } else if ((k==0 || k==a-1)) {
                    cout << arr[j][k];
                } else {
                    cout << " ";
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
