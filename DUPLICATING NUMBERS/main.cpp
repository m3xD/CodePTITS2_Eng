#include <iostream>

using namespace std;

int GCD(int a,int b) {
    if (b==0) return a;
    return GCD(b,a%b);
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int a,x,y;
        cin >> a >> x >> y;
        for (int j = 0; j < GCD(x,y); ++j) {
            cout << a;
        }
        cout << endl;
    }
    return 0;
}
