#include <iostream>
#include <cmath>

using namespace std;

int T;

long long gcd(long long a,long long b) {
    if (b==0) return a;
    return gcd(b,a%b);
}

struct Fraction {
      int a,b;
};

void read_input(Fraction &f) {
    cin >> f.a >> f.b;
}

void process(Fraction &x,Fraction &y) {
    long long t3 = gcd(x.b,y.b);
    t3=(x.b*y.b)/t3;
    long long res = x.a * (t3/x.b) + y.a * (t3/y.b);
    long long g = gcd(res,t3);
    long long x1 = res/g*res/g,x2=t3/g*t3/g;
    long long g2= gcd(x1,x2);
    cout << x1/g2 << "/" << x2/g2 << " ";
    long long x3 = (x1/g2)*(x.a)*(y.a);
    long long x4 = (x2/g2)*(x.b)*(y.b);
    long long g3= gcd(x3,x4);
    cout << x3/g3 << "/" << x4/g3 << endl;
}
int main() {
    int t;
    cin >> T;
    while (T--) {
        Fraction A;
        Fraction B;
        read_input(A);
        read_input(B);
        process(A, B);
    }
}
