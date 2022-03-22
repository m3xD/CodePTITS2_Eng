#include <iostream>

using namespace std;

class Matrix {
public:
    int a,b,c;
    int n[55][55];
    int g[55][55];
    void get() {
        cin >> a >> b >> c;
        for (int i = 0; i < a; ++i) {
            for (int j = 0; j < b; ++j) {
                cin >> n[i][j];
            }
        }
        for (int i = 0; i < b; ++i) {
            for (int j = 0; j < c; ++j) {
                cin >> g[i][j];
            }
        }
    }
    void display() {
        int product[55][55];
        for (int i = 0; i < a; ++i) {
            for (int j = 0; j < a; ++j) {
                product[i][j]=0;
                for (int k = 0; k < b; ++k) {
                    product[i][j]+=n[i][k]*g[k][j];
                }
            }
        }
        for (int i = 0; i < a; ++i) {
            for (int j = 0; j < c; ++j) {
                cout << product[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Matrix m;
    m.get();
    m.display();
    return 0;
}
