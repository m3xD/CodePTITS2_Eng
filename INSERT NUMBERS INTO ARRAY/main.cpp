#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int a;
        cin >> a;
        int n[a],c[1000000]={0};
        for (int j = 0; j < a; ++j) {
            cin >> n[j];
            c[n[j]]++;
        }
        int maxE = *max_element(n,n+a);
        int minE = *min_element(n,n+a);
        int count=0;
        for (int j = minE; j <= maxE; ++j) {
            if (c[j]==0) count++;
        }
        cout << count << endl;
    }
    return 0;
}
