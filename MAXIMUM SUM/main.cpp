#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int x,y;
        cin >> x >> y;
        int a[x],n[y];
        long long sum1=0,sum2=0;
        for (int j = 0; j < x; ++j) {
            cin >> a[j];
            sum1+=a[j];
        }
        for (int j = 0; j < y; ++j) {
            cin >> n[j];
            sum2+=n[j];
        }
        long long sum=0;
        if (a[x-1]>n[y-1]) {
            for (int j = x-1; j >= 0; --j) {
                if (a[j]>n[y-2]) {
                    sum+=a[j];
                } else {
                    break;
                }
            }
            for (int j = y-2; j >=0 ; --j) {
                sum+=n[j];
            }
        } else {
            for (int j = y-1; j >= 0; --j) {
                if (n[j]>a[x-2]) {
                    sum+=n[j];
                } else {
                    break;
                }
            }
            for (int j = x-2; j >=0 ; --j) {
                sum+=a[j];
            }
        }
        int maxE= max(sum1,sum2);
        if (sum<maxE) {
            cout << maxE << endl;
        } else {
            cout << sum << endl;
        }
    }
    return 0;
}
