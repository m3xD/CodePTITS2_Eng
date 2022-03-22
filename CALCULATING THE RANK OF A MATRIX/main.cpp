#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i=0;i<t;i++) {
        int n,m,temp;
        cin >> n >> m;
        float a[n][m];
        for (int j=0;j<n;j++) {
            for (int k=0;k<m;k++) {
                cin >> a[j][k];
                if(j<=k) {
                    if(j==k) temp=a[j][k];
                    if(temp!=0)
                        a[j][k] /= (float)temp;
                }

            }
        }

        for (int j=0;j<n;j++) {
            for (int k=0;k<m;k++) {
                cout << a[j][k] << " ";
            }
            cout << endl;
        }
    }
    return 0;
} 