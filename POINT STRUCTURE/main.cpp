#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct Point {
    double x,y;
};

void input(Point &P) {
    cin >> P.x >> P.y;
}

double distance(Point p1, Point p2) {
    double res = (double) sqrt((double(p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y)));
    return res;
}


int main(){
    struct Point A,B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}
