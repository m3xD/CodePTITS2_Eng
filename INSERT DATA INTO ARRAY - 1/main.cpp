#include <iostream>
using namespace std;

int main() {
        int n,m;
        cin >> n >> m;
        int a[n],b[m];
        for (int j = 0; j < n; ++j) {
            cin >> a[j];
        }
        for (int j = 0; j < m; ++j) {
            cin >> b[j];
        }
        int l;
        cin >> l;
        for (int j = 0; j < l; ++j) {
            cout << a[j] << " ";
        }
        for (int j = 0; j < m; ++j) {
            cout << b[j] << " ";
        }
        for (int i = l; i < n; ++i) {
              cout << a[i] << " ";
         }
        cout << endl;
    return 0;
}
