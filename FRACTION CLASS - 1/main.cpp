#include <iostream>

using namespace std;

class Fraction {
public:
    long long a,b;
    void getInf() {
        cin >> a >> b;
    }
    void display() {
        long long temp1=a,temp2=b;
        while (temp2!=0) {
            long long x = temp2;
            temp2=temp1%temp2;
            temp1=x;
        }
        cout << a/temp1 << "/" << b/temp1 << endl;
    }
};

int main() {
    Fraction f;
    f.getInf();
    f.display();
    return 0;
}
