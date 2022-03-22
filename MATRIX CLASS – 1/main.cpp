#include <iostream>

using namespace std;

class Matrix {
public:
    int a,b;
    int n[55][55];
    void get4() {
        cin >> a >> b;
        for (int i = 0; i < a; ++i) {
            for (int j = 0; j < b; ++j) {
                cin >> n[i][j];
            }
        }
    }
    void display() {
        int temp[55][55];
        for (int i = 0; i < b; ++i) {
            for (int j = 0; j < a; ++j) {
                temp[i][j]=n[j][i];
            }
        }
        int product[55][55];
        for (int i = 0; i < a; ++i) {
            for (int j = 0; j < a; ++j) {
                product[i][j]=0;
                for (int k = 0; k < b; ++k) {
                    product[i][j]+=n[i][k]*temp[k][j];
                }
            }
        }
        for (int i = 0; i < a; ++i) {
            for (int j = 0; j < a; ++j) {
                cout << product[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        Matrix m;
        m.get4();
        m.display();
        cout << endl;
    }
    return 0;
}
