#include <iostream>
#include <string>

using namespace std;

class Employee {
public:
    string name;
    string gender;
    string dateOfBirth;
    string Address;
    string taxNum;
    string dateOfSign;
    void get() {
        getline(cin,name);
        cin >> gender >> dateOfBirth;
        cin.ignore();
        getline(cin,Address);
        cin >> taxNum >> dateOfSign;
    }
    void display() {
        cout << "00001 " << name << " " << gender << " " << dateOfBirth << " " << Address << " " << taxNum <<  " " << dateOfSign;
    }
};

int main() {
    Employee e;
    e.get();
    e.display();
    return 0;
}
