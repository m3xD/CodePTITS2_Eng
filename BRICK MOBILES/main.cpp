#include <iostream>
#include <string>

using namespace std;


int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        string str;
        cin >> str;
        int b[10000];
        for (int j = 0; j < str.size(); ++j) {
            if (str[j]>='a'&&str[j]<='z') str[j]-=32;
            switch (str[j]) {
                case 'A': b[j] = 2; break;
                case 'B': b[j] = 2; break;
                case 'C': b[j] = 2;break;
                case 'D': b[j] = 3;break;
                case 'E': b[j] = 3;break;
                case 'F': b[j] = 3;break;
                case 'G': b[j] = 4;break;
                case 'H': b[j] = 4;break;
                case 'I': b[j] = 4;break;
                case 'J': b[j] = 5;break;
                case 'K': b[j] = 5;break;
                case 'L': b[j] = 5;break;
                case 'M': b[j] = 6;break;
                case 'N': b[j] = 6;break;
                case 'O': b[j] = 6;break;
                case 'P': b[j] = 7;break;
                case 'Q': b[j] = 7;break;
                case 'R': b[j] = 7;break;
                case 'S': b[j] = 7;break;
                case 'T': b[j] = 8;break;
                case 'U': b[j] = 8;break;
                case 'V': b[j] = 8;break;
                case 'W': b[j] = 9;break;
                case 'X': b[j] = 9;break;
                case 'Y': b[j] = 9;break;
                case 'Z': b[j] = 9;break;
            }
        }
        int g = true;
        for (int j = 0; j < str.size(); ++j) {
           if (b[j]!=b[str.size()-j-1]) {
               g = false;
               break;
           }
        }
        if (g) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
