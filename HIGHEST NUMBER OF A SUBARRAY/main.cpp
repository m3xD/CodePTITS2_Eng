#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        long long a,b;
        cin >> a >> b;
        long long arr[a];
        for (int j = 0; j < a; ++j) {
            cin >> arr[j];
        }
        long long max;
        for (int j = 0; j <= a-b; ++j) {
            max = arr[j];
            for (int k = 1; k < b; ++k) {
                if (arr[j+k]>max) {
                    max = arr[k+j];
                }
            }
            cout << max << " ";
        }
        cout << endl;
    }
    return 0;
}
