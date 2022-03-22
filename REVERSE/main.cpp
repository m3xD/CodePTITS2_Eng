#include <iostream>

using namespace std;

int main() {
    long long a;
    cin >> a;
    long long res = 0;
    while (a>0) {
        res = res*10+a%10;
        a/=10;
    }
    cout << res;
    return 0;
}
