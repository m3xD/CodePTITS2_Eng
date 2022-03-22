#include <iostream>
#include <cmath>

using namespace std;

int maxValue(int a[],int n) {
    int max = a[0];
    for (int i = 0; i < n; ++i) {
        if (max<a[i]) max = a[i];
    }
    return max;
}

int maxIndex(int a[],int n) {
    int max;
    for (int i = 0; i < n; ++i) {
        if (maxValue(a,n)==a[i]) max=i;
    }
    return max;
}


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
        int result = -1;
        int min = a[0];
        if (n<=1) cout << "-1" << endl;
        else {
            for (int j = 1; j < n; ++j) {
                result = fmax(result,a[j]-min);
                min = fmin(min,a[j]);
            }
        }
       if (result<=0) {
           cout << -1 << endl;
       } else {
           cout << result << endl;
       }
    }
    return 0;
}
