#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;
bool comp(const int a, const int b){
    return a > b;
}
struct item {
    string itemName,itemGroup;
    double buyingPrice, sellingPrice;
};


int main() {
    int n;
    cin >> n;
    item list[n];
    double itemID[n];
    for (int i = 0; i < n; ++i) {
        cin.ignore();
        getline(cin,list[i].itemName);
        getline(cin,list[i].itemGroup);
        cin >> list[i].buyingPrice >> list[i].sellingPrice;
      //  cin.ignore();
        itemID[i] = list[i].sellingPrice-list[i].buyingPrice;
    }
    sort(itemID,itemID+n,comp);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (itemID[i] == (list[j].sellingPrice - list[j].buyingPrice)) {
                cout << j + 1 << " " << list[j].itemName << " " << list[j].itemGroup << " ";
                cout << fixed << setprecision(2) << itemID[i] << endl;
                break;
            }
        }
    }
    return 0;
}