#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        string str;
        cin >> str;
        long long sum = 0;
        for (int j = 0; j < str.length(); ++j) {
            sum += (str[j]-48);
        }
        long long temp=sum;
        while (sum/10!=0) {
             temp = 0;
            while (sum>0) {
                temp += sum%10;
                sum/=10;
            }
            sum = temp;
        }
        if (temp==9) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}
