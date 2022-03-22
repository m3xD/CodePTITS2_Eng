#include <iostream>

using namespace std;

long long UCLN(long long a,long long b) {
    while (b!=0) {
        long long temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

long long sumDigit(long long n) {
    long long sum = 0;
    while(n>0) {
        sum += n%10;
        n/=10;
    }
    return sum;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        long long a;
        cin >> a;
        while (UCLN(a,sumDigit(a))==1) {
            a++;
        }
        cout << a << endl;
    }
    return 0;
}
