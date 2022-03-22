#include <iostream>

using namespace std;

long long gcd(long long a, long long b) {
    while (b!=0) {
        long long x = b;
        b=a%b;
        a=x;
    }
    return a;
}

class Fraction {
public:
    long long a,b,c,d;
    void getInf() {
        cin >> a >> b >> c >> d;
    }
    void display() {
        long long t3 = gcd(b,d);
        t3=(b*d)/t3;
        long long res = a * (t3/b) + c * (t3/d);
        long long g = gcd(res,t3);
        cout << res/g << "/" << t3/g;
    }
};

int main() {
    Fraction f;
    f.getInf();
    f.display();
    return 0;
}
