#include <iostream>

using namespace std;

int up(char str[]) {
    if (str[5] < str[6] && str[6] < str[7] && str[7] < str[9] && str[9] < str[10]) return 1;
    else return 0;
}

int allequal(char str[]) {
    int v = 0, z = 0;
    if (str[5] == str[6] && str[6] == str[7]) v = 1;
    if (str[9]==str[10]) z = 1;
    if (v&&z) return 1;
    return 0;
}

int sixeight(char str[]) {
    int g = 1;
    for (int j = 5; j < 8; ++j) {
        if (str[j]!='6' && str[j]!='8') g = 0;
    }
    for (int j = 9; j < 11; ++j) {
        if (str[j]!='6' && str[j]!='8') g = 0;
    }
    if (g) return 1;
    else return 0;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        char str[50];
        cin >> str;
        if (allequal(str) || up(str) || sixeight(str)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}