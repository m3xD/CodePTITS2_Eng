#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long n;
    cin >> n;
    // int b = sqrt(n);
    bool check[100000];
    for (int i = 0; i <= 100000; ++i) {
        check[i]=true;
    }
    for (int i = 2; i <= 100000; ++i) {
        if (check[i]) {
            for (int j = 2*i; j <= 100000; j+=i) {
                check[j]=false;
            }
        }
    }
    int count = 0;
    for (long long i = 2; i <= sqrt(n); ++i) {
        for (long long j = i+1; j <= sqrt(n); ++j) {
            if (check[i]&&check[j]) {
                if (i!=j&&((i*j)<=sqrt(n))) {
                    count++;
                } else {
                    break;
                }
            }
        }
    }
    for (int i = 2; i <= sqrt(n); ++i) {
        long long res=1;
        if (check[i]) {
            res = pow(i,8);
            if (res<=n) {
                count++;
            }
            else break;
        }

    }
    cout << count;
    return 0;
}
