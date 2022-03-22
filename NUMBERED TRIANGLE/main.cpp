#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    int z = 0;
    for (int i = 1; i <= a; ++i) {
        for (int j = 1; j <= i+z; ++j) {
            cout << j;
        }
        z+=1;
        cout << endl;
    }
    return 0;
}
