#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        string str1;
        string str2;
        cin.ignore(32767,'\n');
        getline(cin,str1);
        getline(cin,str2);
        vector<string> s1;
        vector<string> s2;
        for (int j = 0; j < str1.size(); ++j) {
            string s = "";
            while (j < str1.size() && str1[j]!=' ') {
                s+=str1[j++];
            }
            s1.push_back(s);
        }
        for (int j = 0; j < str2.size(); ++j) {
            string s = "";
            while (j < str2.size() && str2[j]!=' ') {
                s+=str2[j++];
            }
            s2.push_back(s);
        }
        sort(s1.begin(),s1.end());
        for (int j = 0; j < s1.size(); ++j) {
            bool v = true;
            for (int l = 0; l < s2.size(); ++l) {
                if (s1[j]==s2[l]) {
                    v = false;
                    break;
                }
            }
            if (v&&s1[j]!=s1[j+1]) cout << s1[j] << " ";
        }
        cout << endl;
        s1.clear();
        s2.clear();
    }
    return 0;
}
