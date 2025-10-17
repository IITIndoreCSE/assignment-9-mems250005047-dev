#include <iostream>
#include <string>
using namespace std;

struct SalesRecord {
    string month;
    float amount;
};

int main() {
    SalesRecord sales[12];

    for(int i = 0; i < 12; i++) {
        cout << "Month " << (i+1) << " Name: ";
        cin >> sales[i].month;
        cout << "Sales Amount: ";
        cin >> sales[i].amount;
    }

    int maxIdx = 0, minIdx = 0;
    for(int i = 1; i < 12; i++) {
        if(sales[i].amount > sales[maxIdx].amount) {
            maxIdx = i;
        }
        if(sales[i].amount < sales[minIdx].amount) {
            minIdx = i;
        }
    }

    cout << "Output: Month with maximum sales: "
         << sales[maxIdx].month << " with amount " << sales[maxIdx].amount << endl;

    cout << "Month with minimum sales: "
         << sales[minIdx].month << " with amount " << sales[minIdx].amount << endl;

    return 0;
}
