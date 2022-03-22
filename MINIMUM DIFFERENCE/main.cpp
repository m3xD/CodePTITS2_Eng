#include <iostream>
#include <algorithm>

using namespace std;
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        int a[n];
        for (int j = 0; j < n; ++j) {
            cin >> a[j];
        }
        sort(a,a+n);
        int min = a[n-1]-a[n-2];
        for (int j = n-2; j > 0; --j) {
            if (min>a[j]-a[j-1]) min = a[j]-a[j-1];
        }
        cout << min << endl;
    }
    return 0;
}
