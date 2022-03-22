#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cin >> str;
    int count = 1;
    bool g = false;
    for (int i = 0; i < str.size()-1; ++i) {
        if (str[i]==str[i+1]) {
            count++;
        } else {
            count = 1;
        }
        if (count==7) {
            cout << "YES";
            g = true;
            break;
        }
    }
    if (!g) cout << "NO";
    return 0;
}
