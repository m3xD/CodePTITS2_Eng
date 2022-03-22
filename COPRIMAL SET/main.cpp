#include <iostream>

using namespace std;

int UCLN(int a,int b) {
   if (b==0) return a;
   return UCLN(b,a%b);
}

bool check(int a,int b) {
    int sum = (a*(a+1))/2;
    int x = (sum+b)/2;
    int y = sum-x;
    if(sum<b) return false;
    if (x+y==sum&&x-y==b) {
        if (UCLN(x,y)==1) return true;
        else return false;
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int a,b;
        cin >> a >> b;
        if (check(a,b)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}