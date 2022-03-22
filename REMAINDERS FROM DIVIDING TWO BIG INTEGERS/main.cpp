#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        string str1;
        cin >> str1;
        long long m;
        cin >> m;
        long long res=0;
        for (int j = 0; j < str1.size(); ++j) {
            res =(res*10+str1[j]-'0')%m;
        }
        cout << res << endl;
    }
    return 0;
}
