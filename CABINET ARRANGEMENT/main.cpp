#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[50][50]={0};
    int count = 1;
    int k = n-1;
    while (k>0) {
        for (int i=k; i<n; ++i) {
            a[i-k][i]=count;
            count++;
        }
        k--;
    }
    for (int i = 0; i < n; ++i) {
        a[i][i]=count;
        count++;
    }
    int x=1;
    while (x<n) {
        for (int g=x;g<n;++g) {
            a[g][g-x]=count;
            count++;
        }
        x++;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
