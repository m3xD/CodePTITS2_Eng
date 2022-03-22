#include <iostream>
#include <string>

using namespace std;

struct timeStamps {
    int hour,minute,second;
};

int main() {
    int t;
    cin >> t;
    timeStamps s[t];
    for (int i = 0; i < t; ++i) {
        cin >> s[i].hour >> s[i].minute >> s[i].second;
    }
    for (int i = 0; i < t-1; ++i) {
        for (int j = i+1; j < t; ++j) {
            if (s[i].hour>s[j].hour)  {
                swap(s[i],s[j]);
            }
        }
    }
    for (int i = 0; i < t-1; ++i) {
        for (int j = i+1; j < t; ++j) {
            if (s[i].hour==s[j].hour) {
                if (s[i].minute>s[j].minute) {
                    swap(s[i],s[j]);
                }
            }
        }
    }
    for (int i = 0; i < t-1; ++i) {
        for (int j = i+1; j < t; ++j) {
            if (s[i].minute==s[j].minute) {
                if (s[i].second>s[j].second&&s[i].hour>=s[j].hour) {
                    swap(s[i],s[j]);
                }
            }
        }
    }
    for (int i = 0; i < t; ++i) {
        cout << s[i].hour << " " << s[i].minute << " " << s[i].second << endl;
    }
    return 0;
}
