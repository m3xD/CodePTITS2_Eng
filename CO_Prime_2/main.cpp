#include <iostream>
#include <algorithm>

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
        int sum = (a*(a+1))/2;
        int x = (sum+b)/2;
        int y = sum-x;
        bool g = true;
        if(sum<b) {
            cout << "No" << endl;
            g=false;
        }
        if (g&&x+y==sum&&x-y==b) {
            if (UCLN(x,y)==1) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    return 0;
}