#include <bits/stdc++.h>

using namespace std;

long long LCM(long long x, long long y, long long z)
{
    long long ans = ((x * y)/(__gcd(x, y)));
    return ((z * ans)/(__gcd(ans, z)));
}

long long DBTT(long long x,long long y,long long z,long long n) {
    long long bcnn=LCM(x,y,z);
    long long w = (long long) pow(10,n-1);
    long long k = w % bcnn;
    if (k==0) return w;
    w+=(bcnn-k);
    if (w<(long long)pow(10,n)) {
        return w;
    } else {
        return 0;
    }
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        long long x,y,z,n;
        cin >> x >> y >> z >> n;
        long long res=DBTT(x,y,z,n);
        if (res!=0) {
            cout <<res<<endl;
        } else {
            cout << "-1" << endl;
        }
    }
    return 0;
}
