#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); ++i) {
        if (str[i]=='.') {
            if (2==(str.size()-i-1)) {
                if ((str[i + 1] == 'P' || str[i+1]== 'p') && (str[i+2]=='y' || str[i+2]=='Y')) {
                    cout << "yes";
                    break;
                } else {
                    cout << "no";
                    break;
                }
            } else {
                cout << "no";
                break;
        }
        }
    }

    return 0;
}
