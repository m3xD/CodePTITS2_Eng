#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream fp1;
    fp1.open("PTIT.in");
    ofstream fp2;
    fp2.open("PTIT.out");
    char line[255];
    while (!fp1.eof()) {
        fp1.getline(line,80);
        cout << line << endl;
        fp2<<line<<endl;
    }
    fp1.close();
    fp2.close();
    return 0;
}
