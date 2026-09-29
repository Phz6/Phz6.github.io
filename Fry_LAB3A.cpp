#include <iomanip>
#include <iostream>
#include <string>
#include <fstream>
#include <math.h>

using namespace std;

int main() {
    
    const string SENTINEL = "99";
    string itemName;
    double itemCost, totalCost;
    int itemInv=1, saleNum=1, itemCount=0;
    double price1, price2, price3, price4;

    
    ifstream inFile;
    inFile.open("jerseyNameCost.txt");

    if (!inFile) {
        cout << "Error opening input file." << endl;
        return 1;
    }
    
    cout << "Welcome to NFL Shop!" << endl;
    cout << "Jersey Menu:" << endl;

    for (int i=1; i <= 4; i++) {
        cout << left << itemInv << "  ";
        getline(inFile, itemName);
        cout << left << itemName << "  $"; 
        inFile >> itemCost;
        cout << right << itemCost << endl;
        itemInv++;
        inFile.ignore();
         
    }
    
    inFile >> itemCost;

    switch (i) {
        case 1: price1 = itemCost;
            break;
        case 2: price2 =itemCost;
            break;
        case 3: price3 = itemCost;
            break;
        case 4: price4 = itemCost;
            break;
    }
    //once you get the data pulled correctly, each in its onwn variable, code will need a switch
    // statement to correctly handle the selected jersey and total amount due.

    while (cin) {
        
        cout << "Enter the option for the jersey [1/2/3/4] or 99 to calculate total: ";
        cin >> saleNum;

        switch (saleNum) {
            case 1: totalCost += price1;
                break;
            case 2: totalCost += price2;
                break;
            case 3: totalCost += price3;
                break;
            case 4: totalCost += price4;
                break;
        }
        itemCount++;
        cout << "You purchased: ";
        for (int s = 0; s < itemCount; s++) {
                cout << "*";
                cout << "Your subtotal is: $" << totalCost << endl;
        
    }

        if (saleNum == 99) {
                break;
        }

        if (saleNum < 1 || saleNum > 4) {
            cout << "Invalid Selection" << endl;
            continue;
        }

        

        
        

    }
}