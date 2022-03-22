#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        long long a;
        cin >> a;
        bool g = true;
        if (a%2!=0) g = false;
        while (a>0) {
            if ((a%10)%2!=0) {
                g = false;
                break;
            }
            a/=10;
        }
        if (g) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
