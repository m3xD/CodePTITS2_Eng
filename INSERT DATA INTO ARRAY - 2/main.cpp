#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n,m,p;
        cin >> n >> m >> p;
        int a[n],b[m];
        for (int j = 0; j < n; ++j) {
            cin >> a[j];
        }
        for (int j = 0; j < m; ++j) {
            cin >> b[j];
        }
        cout << "Test " << i+1 << ":" << endl;
        for (int j = 0; j < p; ++j) {
            cout << a[j] << " ";
        }
        for (int j = 0; j < m; ++j) {
            cout << b[j] << " ";
        }
        for (int j = p; j < n; ++j) {
            cout << a[j] << " ";
        }
        cout << endl;
    }
    return 0;
}
