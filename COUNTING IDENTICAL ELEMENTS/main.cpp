#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        int a[n][n],b[100000]={0};
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                cin >> a[j][k];
                if (j==0) b[a[j][k]]++;
            }
        }
        for (int j = 0; j < n; ++j) {
            if (b[a[0][j]]>1) {
                b[a[0][j]]--;
                a[0][j]=0;
            }
        }
        int count,finalCount=0;
        for (int j = 0; j < n; ++j) {
            count = 0;
            for (int k = 1; k < n; ++k) {
                for (int l = 0; l < n; ++l) {
                    if (a[0][j]==a[k][l]) {
                        count++;
                        break;
                    }
                }
            }
            if (count==n-1) finalCount++;
        }
        cout << finalCount << endl;
    }
    return 0;
}
