#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double a;
    cin >> a;
    char signal;
    cin >> signal;
    double b;
    cin >> b;
    switch (signal) {
        case '+': cout << fixed << setprecision(2) <<  a + b;
            break;
        case '-': cout << fixed << setprecision(2) << a - b;
            break;
        case '*': cout << fixed << setprecision(2) <<  a * b;
            break;
        case '/': cout << fixed << setprecision(2) << a / b;
            break;
    }
    return 0;
}
