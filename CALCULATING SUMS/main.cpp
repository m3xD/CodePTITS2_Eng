#include <iostream>
#include <fstream>
#include <string>
#include <string.h>

using namespace std;

int main() {
    ifstream fp1;
    fp1.open("DATA.in");
    ofstream fp2;
    fp2.open("DATA.out");
    char line[255];
    while (!fp1.eof()) {
        fp1.getline(line,80);
        cout << line << endl;
        int finalSum=0;
        for (int i = 0; i < strlen(line); ++i) {
            string str="";
            int sum = 0;
            while (i< strlen(line)&&line[i]!=' ') {
                str+=line[i];
            }
            if (str.size()>10){
                break;
            } else {
                for (int j = 0; j < str.size(); ++j) {
                    sum = (sum*10) + (str[j]-48);
                }
                finalSum+=sum;
            }
        }
        fp2 << line << endl;
    }
    fp1.close();
    fp2.close();
    return 0;
}
