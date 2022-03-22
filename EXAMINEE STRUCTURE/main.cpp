#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Examinee {
    string fullName;
    string dateOfBirth;
    double scoreOfSubject1,scoreOfSubject2,scoreOfSubject3;
};

void input(Examinee &e) {
    getline(cin,e.fullName);
    cin >> e.dateOfBirth;
    cin >> e.scoreOfSubject1 >> e.scoreOfSubject2 >> e.scoreOfSubject3;
}

void print(Examinee &e) {
    cout << e.fullName << " " << e.dateOfBirth << " ";
    double res = e.scoreOfSubject3 + e.scoreOfSubject2 + e.scoreOfSubject1;
    cout << fixed << setprecision(1) << res;
}

int main(){
    struct Examinee A;
    input(A);
    print(A);
    return 0;
}
