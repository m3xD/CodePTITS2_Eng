#include <iostream>
#define PI 3.141592653589793238
#include <cmath>
#include <iomanip>

using namespace std;

struct Point {
    double x1,y1,x2,y2,x3,y3;
};

int main() {
    int t;
    cin >> t;
    Point p[t];
    for (int i = 0; i < t; ++i) {
        cin >> p[i].x1 >> p[i].y1 >> p[i].x2 >> p[i].y2 >> p[i].x3 >> p[i].y3;
        double s1=sqrt(pow(p[i].x1-p[i].x2,2) + pow(p[i].y1-p[i].y2,2));
        double s2=sqrt(pow(p[i].x1-p[i].x3,2) + pow(p[i].y1-p[i].y3,2));
        double s3=sqrt(pow(p[i].x2-p[i].x3,2) + pow(p[i].y2-p[i].y3,2));
        double res = (double) 1/4 * sqrt((s1+s2+s3)*(s1+s2-s3)*(s2+s3-s1)*(s3+s1-s2));
        if (res==0||s1+s2<s3) {
            cout << "INVALID" << endl;
        } else {
            double radius = (s1*s2*s3)/(4*res);
            cout<< fixed << setprecision(3) << PI*radius*radius << endl;
        }
    }
    return 0;
}
