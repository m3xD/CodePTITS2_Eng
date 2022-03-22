#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        long long a,b;
        cin >> a >> b;
        long long n[a];
        for (int j = 0; j < a; ++j) {
            cin >> n[j];
        }
        sort(n,n+a);
        long long count = 0;
        for (int j = a-1; j > 0; --j) {
           if (lower_bound(n,n+a,b-n[j]) - n < j) {
               count += j - (lower_bound(n,n+a,b-n[j])-n);
           }
            if (n[j]+n[j+1]<b) break;
        }
        cout << count <<endl;
    }
    return 0;
}
