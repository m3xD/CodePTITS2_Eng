#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int a,b;
        cin >> a >> b;
        int arr[a][b];
        for (int j = 0; j < a; j++) {
            for (int k = 0; k < b; ++k) {
                cin >> arr[j][k];
            }
        }
        int count = 0;
        for (int j = 0; j < a;j++) {
            for (int k = 0; k < b;) {
                bool check = false,z= false;
                if (arr[j][k]==1) {
                    z=true;
                    arr[j][k]=0;
                    bool x=false,y=false,c=false,d=false;
                    if (k+1<b&&arr[j][k+1]==1) {
                        check=true;
                        x=true;
                    } else if (j-1>=0&&k+1<b&&arr[j-1][k+1]==1) {
                        check=true;
                        j=j-1;
                        y=true;
                    } else if (j+1<a&&arr[j+1][k]==1) {
                        check=true;
                        j=j+1;
                        c=true;
                    } else if (j+1<a&&k-1>=0&&arr[j+1][k-1]==1) {
                        j=j+1;
                        check=true;
                        d=true;
                    }
                    if (x) {
                       k++;
                    } else if (y) {
                        k++;
                    } else if (d) {
                        k--;
                    }
                } else {
                    k++;
                }
                if (!check&&z) {
                    count++;
                    j=0;
                    break;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
