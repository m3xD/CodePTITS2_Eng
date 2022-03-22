#include <iostream>
#include <string>


using namespace std;

int main() {
    string str;
    while (getline(cin,str,'\n')&&str.compare("\0")!=0) {
        int k = 0;
        for (int i = 0; i < str.size(); ++i) {
            string s ="";
            while (i<str.size()&&str[i]!=' ') {
                s += str[i++];
            }
            if (s=="?"||s=="."||s=="!") {
                s = "";
                cout << endl;
            }
            if (s!="") {
                bool f = true;
                k++;
            for (int j = 0; j < s.size(); ++j) {
                if (s[0]<='z'&&s[0]>='a'&&k==1) {
                    s[0]-=32;
                }
                if (k!=1)
                if (s[j]>='A'&&s[j]<='Z') {
                    s[j]+=32;
                }
                if (s[j]=='.'||s[j]=='?'||s[j]=='!') {
                    s.erase(s.begin()+j);
                    cout << s << endl;
                    k=0;
                    f= false;
                    break;
                }
                if (s[j]==','||s[j]==':') {
                    cout << s;
                    f=false;
                }
            }
                 if (f)
                 cout << s << " ";
                }
            }
        /* cin.ignore();
        if (str=="") break;*/
    }
    return 0;
}
