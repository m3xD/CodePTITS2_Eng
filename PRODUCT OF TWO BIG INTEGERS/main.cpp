#include <iostream>
#include <string>

using namespace std;

string bigInt(string str1,string str2) {
    while (str1.size()>str2.size()) str2 = "0" + str2;
    while (str1.size()<str2.size()) str1 = "0" + str1;
    int mem = 0;
    string res;
    for (int j = str1.size()-1; j >=0 ; --j) {
        int temp = (str1[j]-48) + (str2[j]-48) + mem;
        res = (char) (temp%10+'0') + res;
        mem = temp/10;
    }
    if (mem>0) res = (char) (mem+'0') + res;
    return res;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        string str1,str2;
        cin >> str1 >> str2;
        int temp = str2.size();
        if (str1.size()<str2.size()) swap(str1,str2);
        while (str1.size()>str2.size()) str2 = "0" + str2;
        int final = str2.size()-temp;
        int mem = 0;
        string res = "";
        int sum;
        string finalRes="";
        for (int j = str2.size()-1; j >= final; --j) {
            for (int k = str1.size()-1; k >= 0; --k) {
                 sum = ((str1[k]-48)*(str2[j]-48))+mem;
                if (sum>0) {
                    res = (char) (sum%10+48) + res;
                    mem = sum/10;
                } else {
                    res = (char) (sum+48) + res;
                    mem = 0;
                }
            }
            if (mem>0) {
                res = (char) (mem+48) + res;
                mem = 0;
            }
            if (j<str2.size()-1){
                res = res + "0";
                finalRes = bigInt(finalRes,res);
                res = "";
            } else {
                finalRes = res;
                res = "";
            }
        }
        cout << finalRes << endl;
    }
    return 0;
}
