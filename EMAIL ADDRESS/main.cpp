#include <iostream>
#include <string>

using namespace std;

int wCount(string str)
{
    int word = (str[0] != ' ');
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
        {
            word++;
        }
    }
    return word;
}

int main() {
    string str;
    getline(cin,str);
    int count = wCount(str);
    for (int i = 0; i < str.size(); ++i) {
        string temp="";
        while (i < str.size() && str[i]!=' ') {
            temp += str[i++];
        }
        if (count>1) {
            if (temp[0]>='A'&&temp[0]<='Z') {
                temp[0]+=32;
            }
            count--;
            cout << temp[0];
        } else {
            for (int j = 0; j < temp.size(); ++j) {
                if (temp[j]>='A'&&temp[j]<='Z') {
                    temp[j]+=32;
                }
            }
            cout << temp << "@ptit.edu.vn";
        }
    }
    return 0;
}
