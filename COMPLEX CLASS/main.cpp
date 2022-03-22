#include <iostream>

using namespace std;

class Complex {
public:
    int a,b,c,d;
    void input() {
        cin >> a >> b >> c >> d;
    }
    void display() {
        int s1=a+c,s2=b+d;
        int res1=(s1*a-s2*b);
        int res2=(s1*b+s2*a);
        if (res2>0) {
            cout << res1 << " + " << res2 << "i, ";
        }  else {
            cout << res1 << " - " << res2*-1 << "i, ";
        }
        int res3=(s1*s1)+(-1*s2*s2);
        int res4=2*s1*s2;
        if (res4>0) {
            cout << res3 << " + " << res4 << "i" << endl;
        } else {
            cout << res3 << " - " << res4*-1 << "i" << endl;
        }
    }
};

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        Complex c;
        c.input();
        c.display();
    }
    return 0;
}
