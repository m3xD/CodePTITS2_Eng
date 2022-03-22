#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        char str[100000];
        cin >> str;
        int b[1000]={0};
        for (int j = 0; j < strlen(str); ++j) {
            b[str[j]]++;
        }
        for (int j = 0; j < strlen(str); ++j) {
            if (b[str[j]]==1) cout << str[j];
        }
        cout << endl;
    }
    return 0;
}
