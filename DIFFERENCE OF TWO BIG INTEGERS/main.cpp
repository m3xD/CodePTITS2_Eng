#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        string str1;
        string str2;
        cin >> str1 >> str2;
        if (str1.size()<str2.size()) {
            swap(str1,str2);
        } else if (str1.size()==str2.size()) {
            for (int j = 0; j < str1.size(); ++j) {
               if (str1[j]>str2[j]) {
                   break;
               } else if (str1[j]<str2[j]){
                   swap(str1,str2);
                   break;
               }
            }
        }
        while (str1.size()>str2.size()) str2 = "0"+str2;
        while (str1.size()<str2.size()) str1 = "0"+str1;
        int mem = 0;
        string res="";
        for (int j = str1.size()-1; j >= 0 ; --j) {
            int temp = (int)(str1[j]-48) - (int)(str2[j]-48) - mem;
            if (temp < 0) {
                res = (char) ((temp+10)+48) + res;
                mem = 1;
            } else {
                res = (char) (temp+48) + res;
                mem=0;
            }
        }
        cout << res << endl;
    }
    return 0;
}
