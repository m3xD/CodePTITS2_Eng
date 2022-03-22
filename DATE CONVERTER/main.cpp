#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    int y = t / 365;
    int w = (t - 365*y) / 7;
    int d = t - 365*y - 7*w;
    cout << y << " " << w << " " << d;
    return 0;
}
