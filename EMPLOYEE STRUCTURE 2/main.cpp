#include <iostream>
#include <string>

using namespace std;

struct Employee {
    string fullName, gender, dateOfBirth, address, tax, contractDate;
};

void input(Employee &e) {
        cin.ignore();
        getline(cin,e.fullName);
        cin >> e.gender >> e.dateOfBirth;
        cin.ignore();
        getline(cin,e.address);
        cin >> e.tax >> e.contractDate;
}

void printlist(Employee e[],int n) {
    for (int i = 0; i < n; ++i) {
        if (i+1<10) {
            cout << "0000" << i+1 << " ";
        } else {
            cout << "000" << i+1 << " ";
        }
        cout << e[i].fullName << " " << e[i].gender << " " << e[i].dateOfBirth << " " << e[i].address << " " << e[i].tax << " " << e[i].contractDate << endl;
    }

}

int main(){
    struct Employee lst[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) input(lst[i]);
    printlist(lst,N);
    return 0;
}

