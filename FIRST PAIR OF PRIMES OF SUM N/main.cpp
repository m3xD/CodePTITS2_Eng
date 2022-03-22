#include <iostream>

using namespace std;
int main() {

    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int a;
        cin >> a;
        bool NT[a+1];
        if (a==1||a==2) {
            cout << "-1" << endl;
        } else {
            for (int j = 2; j <= a; ++j) {
                NT[j] = true;
            }
            for (int j = 2; j * j <= a; ++j) {
                if (NT[j]) {
                    for (int k = j * j; k <= a; k += j) {
                        NT[k] = false;
                    }
                }
            }
            int g = 0;
            for (int j = 2; j < a; ++j) {
               if (NT[j]&&NT[a-j]) {
                   cout << j << " " << a-j << endl;
                   g =1;
                   break;
               }
            }
            if (g==0) cout << "-1" << endl;
        }
    }
    return 0;
}
