#include <iostream>
#include <string>

using namespace std;

struct SalesRecord{
string month;
float amount;
}

int main(){
   SalesRecord salesrecord[12];

cout << "Enter the sales record for each month:\n";
    for (int i = 0; i < 12; i++) {
        cout << "Month " << i + 1 << ":\n";
        cout << "Enter month name: ";
        cin >> records[i].month;
        cout << "Enter sales amount: ";
        cin >> records[i].amount;
    }

string maxMonth, minMonth;
    float maxAmount = -1.0, minAmount = 1e9;

for (int i = 0; i < 12; i++) {
        if (records[i].amount > maxAmount) {
            maxAmount = records[i].amount;
            maxMonth = records[i].month;
        }
        if (records[i].amount < minAmount) {
            minAmount = records[i].amount;
            minMonth = records[i].month;
        }
    }
 cout << "\nMonth with maximum sales: " << maxMonth << " with amount $" << maxAmount << endl;
    cout << "Month with minimum sales: " << minMonth << " with amount $" << minAmount << endl;

    return 0;
}
