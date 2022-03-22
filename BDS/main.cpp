#include <iostream>

using namespace std;

int UCLN(int a,int b) {
    while (b!=0) {
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int a,b;
        cin >> a >> b;
        while (a%2==0||a%3==0) {
            if (a%2==0) a/=2;
            if (a%3==0) a/=3;
        }
        while (b%2==0||b%3==0) {
            if (b%2==0) b/=2;
            if (b%3==0) b/=3;
        }
        if (a==b) {
            cout << "YES" <<endl;
        } else {
            int BCNN = (a*b)/ UCLN(a,b);
            if (BCNN%2==0&&BCNN%3==0) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
