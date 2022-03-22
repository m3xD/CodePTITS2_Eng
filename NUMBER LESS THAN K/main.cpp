#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int a,b;
        cin >> a >> b;
        int n[a],count=0;
        for (int j = 0; j < a; ++j) {
            cin >> n[j];
        }
        for (int j = 0; j < a; ++j) {
            if (n[j]==b) {
                sort(n+j,n+a);
            }
            if (n[j+1]<b) count++;
            else if (n[a-j-2]>b) count++;
        }
        cout << count << endl;
    }
    return 0;
}
