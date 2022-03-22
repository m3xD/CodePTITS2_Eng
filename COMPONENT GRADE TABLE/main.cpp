#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <cstring>

using namespace std;

struct gradeTable {
    string studentID,studentName,Class;
    double s1,s2,s3;
};

bool compareN(gradeTable &a, gradeTable &b) {
      return a.studentName<b.studentName;
}

int main() {
    int n;
    cin >> n;
    gradeTable table[n];
    for (int i = 0; i < n; ++i) {
        cin >> table[i].studentID;
        cin.ignore();
        getline(cin,table[i].studentName);
        cin >> table[i].Class;
        cin >> table[i].s1 >> table[i].s2 >> table[i].s3;
    }
    sort(table,table+n, compareN);
    for (int i = 0; i < n; ++i) {
        cout << i+1 << " " << table[i].studentID << " " << table[i].studentName << " " << table[i].Class << " ";
        cout << fixed << setprecision(1) << table[i].s1 << " ";
        cout << fixed << setprecision(1) << table[i].s2 << " ";
        cout << fixed << setprecision(1) << table[i].s3 << endl;
    }
    return 0;
}
