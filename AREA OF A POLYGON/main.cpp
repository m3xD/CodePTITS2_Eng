#include <iostream>
#include <iomanip>

using namespace std;

struct Point {
    double a,b;
};

int main() {
    int t,x;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> x;
        Point p[x];
        for (int j = 0; j < x; ++j) {
            cin >> p[j].a >> p[j].b;
        }
        double xCol=0,yCol=0;
        for (int j = 0; j < x; ++j) {
             xCol+=p[j].a*p[j+1].b;
             yCol+=p[j].b*p[j+1].a;
        }
        xCol+=p[x-1].a*p[0].b;
        yCol+=p[x-1].b*p[0].a;
       cout << fixed << setprecision(3) << (xCol-yCol)/2 << endl;
    }
    return 0;
}
