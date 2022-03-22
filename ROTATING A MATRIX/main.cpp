#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n,m;
        cin >> n >> m;
        int a[n][m];
        int res[n][m];
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < m; ++k) {
                cin >> a[j][k];
                res[j][k] = a[j][k];
            }
        }
        int hang1=0,cot1=0,hang2=n-1,cot2=m-1;
        while (hang1<=hang2&&cot1<=cot2) {
            for (int j = cot1; j <= cot2 - 1; ++j) {
                res[hang1][j + 1] = a[hang1][j];
            }
            for (int j = hang1; j <= hang2 - 1; ++j) {
                res[j + 1][cot2] = a[j][cot2];
            }
            for (int j = cot2; j >= cot1 + 1; --j) {
                res[hang2][j - 1] = a[hang2][j];
            }
            for (int j = hang2; j >= hang1 + 1; --j) {
                res[j - 1][cot1] = a[j][cot1];
            }
            hang1++;
            hang2--;
            cot1++;
            cot2--;
        }
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < m; ++k) {
                cout << res[j][k] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}