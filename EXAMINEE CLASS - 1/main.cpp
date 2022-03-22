#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Examine {
public:
    string name;
    string dateOfBirth;
    double s1,s2,s3;
    void get() {
        getline(cin,name);
        cin >> dateOfBirth >> s1 >> s2 >> s3;
    }
    void display() {
        cout << name << " " << dateOfBirth << " " << fixed << setprecision(1) << s1+s2+s3;
    }
};

int main() {
    Examine e;
    e.get();
    e.display();
    return 0;
}
