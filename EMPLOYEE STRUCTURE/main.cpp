#include <iostream>
#include <string>

using namespace std;

struct Employee {
    string fullName, gender, dateOfBirth, address, tax, contractDate;
};

void input(Employee &e) {
    getline(cin,e.fullName);
    cin >> e.gender >> e.dateOfBirth;
    cin.ignore();
    getline(cin,e.address);
    cin >> e.tax >> e.contractDate;
}

void print(Employee &e) {
    cout << "00001 " << e.fullName << " " << e.gender << " " << e.dateOfBirth << " " << e.address << " " << e.tax << " " << e.contractDate;
}

int main(){
    struct Employee a;
    input(a);
    print(a);
    return 0;
}
