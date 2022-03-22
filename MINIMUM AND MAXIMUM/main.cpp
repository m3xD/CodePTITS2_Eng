#include <iostream>

using namespace std;

long long maxS(long long a) {
    long long x[20]={0};
    long long i = 0;
    while (a>0) {
       if (a%10==5) {
           x[i]=6;
           i++;
       } else {
           x[i]=a%10;
           i++;
       }
       a/=10;
    }
    long long res=0;
    for (int j = i-1; j >= 0; --j) {
        res = res*10 + x[j];
    }
    return res;
}

long long minS(long long a) {
    int x[20]={0};
    int i = 0;
    while (a>0) {
        if (a%10==6) {
            x[i]=5;
            i++;
        } else {
            x[i]=a%10;
            i++;
        }
        a/=10;
    }
    long long res=0;
    for (int j = i-1; j >= 0; --j) {
        res = res*10 + x[j];
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        long long a,b;
        cin >> a >> b;
        cout << minS(a) + minS(b) << " " << maxS(a) + maxS(b) << endl;
    }
    return 0;
}
