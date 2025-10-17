#include <iostream>
using namespace std;

struct Item{
int id;
float cost;
}

int main(){
  Item items[6]{
{1,45.50},
{2,60.75},
{3,30.25},
{4,75.45},
{5,50.00},
{6,80.90}
};

cout<<"items with cost greater than 50 are : \n";
for(int i =0 ; i<6 ; i++){
if (items[i].cost > 50.00) {
            cout << "Item ID: " << items[i].id << ", Cost: " << items[i].cost << endl;
        }
    }

    return 0;
}




