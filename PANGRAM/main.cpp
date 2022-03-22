#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        string str;
        int b[1000] = {0};
        cin >> str;
        int k; cin >> k;
        int count = 0;
        for (int j = 0; j < str.size(); ++j) {
            b[str[j]]++;
        }
        for (char j = 'a'; j <= 'z'; ++j) {
            if (b[j]==0) count++;
        }
        if (count>k) cout << 0 << endl;
        else cout << 1 << endl;
    }
    return 0;
}
