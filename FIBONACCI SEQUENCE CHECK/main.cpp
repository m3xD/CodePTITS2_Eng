#include <iostream>

using namespace std;

long long Fibo(int n) {
    long long Fibo[18];
    Fibo[1] = 0;
    Fibo[2] = 1;
    for (int i = 3; i <= 18; ++i) {
        Fibo[i] = Fibo[i-1] + Fibo[i-2];
    }
    return Fibo[n];
}

bool checkFibo(long long n) {
    for (int i = 1; Fibo(i) <= n; ++i) {
        if (Fibo(i)==n) return true;
    }
    return false;
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
            if (checkFibo(a[j])) cout << a[j] << " ";
        }
        cout << endl;
    }
    return 0;
}
