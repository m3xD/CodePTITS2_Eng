#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        string str;
        cin >> str;
        long long sum=0;
        for (int z = 0; z < str.size(); ++z) {
            if (i%2==0) {
                sum+=(str[z]-48);
            } else {
                sum-=(str[z]-48);
            }
        }
        if (sum%11==0) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}
