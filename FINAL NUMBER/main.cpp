#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        long long a;
        cin >> a;
        long long sum = 0;
        while (a/10!=0) {
            sum=0;
            while (a>0) {
                sum += a%10;
                a/=10;
            }
            a=sum;
        }
        cout << a << endl;
    }
    return 0;
}
