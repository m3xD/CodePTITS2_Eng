#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Examine {
public:
    string Id;
    string name;
    double s1,s2,s3;
    void get() {
        cin >> Id;
        cin.ignore();
        getline(cin,name);
        cin >> s1 >> s2 >> s3;
    }
    void display() {
        string str="";
        for (int i = 0; i < 3; ++i) {
            str+=Id[i];
        }
        double score = s1*2+s2+s3;
        if (str=="KV1") {
            if (score+0.5<24) {
                cout << Id << " " << name << " " << "0.5" << " " << score << " " << "FAILED";
            } else {
                cout << Id << " " << name << " " << "0.5" << " "  << score << " " << "PASSED";
            }
        } else if (str=="KV2") {
            if (score+1<24) {
                cout << Id << " " << name << " " << 1 << " "  << score << " " << "FAILED";
            } else {
                cout << Id << " " << name << " " << 1 << " " << score << " " << "PASSED";
            }
        } else {
            if (score+2.5<24) {
                cout << Id << " " << name << " " << "2.5" << " " << score << " " << "FAILED";
            } else {
                cout << Id << " " << name << " " << "2.5" << " " << score << " " << "PASSED";
            }
        }

    }
};

int main() {
    Examine e;
    e.get();
    e.display();
    return 0;
}
