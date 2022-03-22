#include <iostream>
#include <string>

using namespace std;


int main() {
    int m,s;
    cin >> m >> s;
    bool g = true;
    if (s>9*m) {
        cout << "-1 -1";
        g = false;
    }
    string str = "";
    int sum = 9;
    int z = 9;
    while (sum!=s&&g) {
        if (sum<s) {
            sum+=z;
            str+=(z+48);
        } else {
            sum-=z;
            z--;
            sum+=z;
        }
    }
    str+=(z+48);
    if (str.size()!=m&&g) {
        cout << "-1 -1";
        g = false;
    }
    if (g)
    for (int i = str.size()-1; i >= 0; --i) {
        cout << str[i];
    }
    if (g) cout << " " << str;
    return 0;
}
