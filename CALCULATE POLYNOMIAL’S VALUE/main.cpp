#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        long long a,b;
        cin >> a >> b;
        long long z[a];
        const unsigned long long modulo = 1000000007;
        long long k = 1;
        long long product,finalResult=0;
        for (int j = 0; j < a; ++j) {
            cin >> z[j];
            product=1;
            for (int l = 0; l < a-k; ++l) {
                product = (product%modulo * b%modulo)%modulo;
            }
            product = ((product%modulo) * (z[j]%modulo))%modulo;
            finalResult = finalResult%modulo + product%modulo;
            k++;
        }
        cout << finalResult << endl;
    }
    return 0;
}
