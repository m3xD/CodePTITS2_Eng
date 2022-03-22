#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
class Point {
  public:
    double x1,x2,y1,y2;
    void getPoint() {
        cin >> x1 >> y1 >> x2 >> y2;
    }
    void display() {
        cout << fixed << setprecision(4) << sqrt(pow(x1-x2,2)+pow(y1-y2,2)) << endl;
    }
};


int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        Point p;
        p.getPoint();
        p.display();
    }
    return 0;
}
