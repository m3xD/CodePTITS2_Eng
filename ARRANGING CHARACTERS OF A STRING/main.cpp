#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        string str;
        cin >> str;
        int count = 0;
        for (int j = 0; j < str.size()-1; ++j) {
            if (str[j]==str[j+1]) {
                count++;
            }
        }
        if (count*2<str.size()) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}
