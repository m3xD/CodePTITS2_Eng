#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        long long a,b;
        cin >> a >> b;
        long long arr[a],arr1[b];
        for (int j = 0; j < a; ++j) {
            cin >> arr[j];
        }
        for (int j = 0; j < b; ++j) {
            cin >> arr1[j];
        }
        for (int j = 0; j < b; ++j) {
                for (int k = 0; k < a; ++k) {
                    if (arr[k]==arr1[j]) {
                        cout << arr1[j] << " ";
                        arr[k]=0;
                }
            }
        }
        sort(arr,arr+a);
        for (int j = 0; j < a; ++j) {
            if (arr[j]!=0) cout << arr[j] << " ";
        }
        cout << endl;
    }
    return 0;
}
