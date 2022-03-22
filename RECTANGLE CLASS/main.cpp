#include <iostream>
#include <string>

using namespace std;

class Rectangle {
public:
    int length,width;
    string color;
    void getIn4() {
        cin >> length >> width;
        cin >> color;
    }
    void display() {
        if (length<=0||width<=0) {
            cout << "INVALID" << endl;
        } else {
            cout << (length+width)*2 << " " << length*width << " ";
            if (color[0]>='a'&&color[0]<='z') color[0]-=32;
            for (int i = 1; i < color.size(); ++i) {
                if (color[i]>='A'&&color[i]<='Z') {
                    color[i]+=32;
                }
            }
            cout << color << endl;
        }
    }
};



int main() {
    Rectangle r;
    r.getIn4();
    r.display();
    return 0;
}
