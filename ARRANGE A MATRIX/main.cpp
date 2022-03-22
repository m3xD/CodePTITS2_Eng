#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int m,n,i;
    cin >> m >> n >> i;
    i--;
    int a[m][n];
    for (int j = 0; j < m; ++j) {
        for (int k = 0; k < n; ++k) {
            cin >> a[j][k];
        }
    }
        for (int k = 0; k < m-1; ++k) {
            for (int l = k + 1; l < m; l++) {
                if (a[k][i]>a[l][i]) swap(a[k][i],a[l][i]);
            }
        }
   for (int j = 0; j < m; ++j) {
        for (int k = 0; k < n; ++k) {
            cout << a[j][k] << " ";
        }
        cout << endl;
    }
    return 0;
}
