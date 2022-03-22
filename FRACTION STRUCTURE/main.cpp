#include <iostream>

using namespace std;

struct Fraction {
    long long a,b;
};

void input(Fraction &F) {
    cin >> F.a >> F.b;
}

long long simplify(Fraction &f) {
    long long x = f.a, y = f.b;
    while (y!=0) {
        long long temp = y;
        y=x%y;
        x = temp;
    }
    return x;
}

void print(Fraction &f) {
    long long x = f.a, y = f.b;
    long long t = simplify(f);
    cout << x/t << "/" << y/t;
}


int main() {
    struct Fraction p;
    input(p);
    simplify(p);
    print(p);
    return 0;
}
