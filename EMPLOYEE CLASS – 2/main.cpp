#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    string name;
    int salary;
    int workDay;
    string position;
    void get() {
        getline(cin,name);
        cin >> salary >> workDay >> position;
    }
    void display() {
        int monthlySalary=salary*workDay,support,bonus=0,total;
        if (position=="NV") support=150000;
        else if (position=="TP") support=180000;
        else if (position=="PGD") support=200000;
        else support=250000;
        if (workDay>=25) bonus=(monthlySalary*20)/100;
        else if (workDay>=22&&workDay<25) bonus=(monthlySalary*10)/100;
        cout << "NV01 " << name << " " << monthlySalary << " " << bonus << " " << support << " " << monthlySalary+bonus+support;
    }
};
int main() {
    Employee e;
    e.get();
    e.display();
    return 0;
}
