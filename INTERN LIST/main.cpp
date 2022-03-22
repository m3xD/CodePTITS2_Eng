#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct intern {
    string studentID,fullName,Class,Email,Corporation;
};

int main() {
    int t;
    cin >> t;
    intern list[t];
    string temp[t];
    for (int i = 0; i < t; ++i) {
        cin>> list[i].studentID;
        temp[i]=list[i].studentID;
        cin.ignore();
        getline(cin,list[i].fullName);
        cin >> list[i].Class >> list[i].Email >> list[i].Corporation;
        cin.ignore();
    }
    sort(temp,temp+t);
    int q;
    cin >> q;
    string Co[q];
    for (int i = 0; i < q; ++i) {
        cin >> Co[i];
        for (int j = 0; j < t; ++j) {
            for (int k = 0; k < t; ++k) {
                if (list[k].Corporation==Co[i]&&temp[j]==list[k].studentID) {
                       cout << k + 1 << " ";
                       cout << list[k].studentID << " " << list[k].fullName << " " << list[k].Class << " " << list[k].Email << " " << Co[i] << endl;
                       break;
                }
            }
        }
    }

    return 0;
}
