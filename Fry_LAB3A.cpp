#include <iomanip>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    
    const string SENTINEL = "99";
    string itemName;
    double itemCost, totalCost=0;
    int itemInv=1, saleNum=1, itemCount=0;
    double price1, price2, price3, price4;
    const double TAX_RATE = 0.06;
    ifstream inFile;
    inFile.open("jerseyNameCost.txt");

    if (!inFile) {
        cout << "Error opening input file." << endl;
        return 1;
    }
    
    cout << "Welcome to NFL Shop!" << endl;
    cout << "Jersey Menu:" << endl;

    cout << fixed << setprecision(2);

    for (int i=1; i <= 4; i++) {
        getline(inFile, itemName);
        inFile >> itemCost;
        inFile.ignore(1000, '\n');
        cout << left << setw(4) << itemInv << setw(37) << itemName << "  $" << itemCost << endl;

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
         itemInv++;
    }


    while (cin) {
        
        cout << "Enter the option for the jersey [1/2/3/4] or 99 to calculate total: ";
        inFile.close();
        cin >> saleNum;

        

        if (saleNum == 99) {
                break;
        }

        if (saleNum < 1 || saleNum > 4) {
            cout << "Invalid selection" << endl;
            continue;
        }

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
        }
        
        cout << " item(s)" << endl;
        cout << "Your subtotal is: $" << totalCost << endl;
        
    }
    double tax = totalCost * TAX_RATE;

    cout << endl;
    cout << left << setw(20) << "Subtotal:" << "$" << right << totalCost << endl;
    cout << "Sales Tax (" << TAX_RATE * 100 << "%): $" << right << tax << endl;
    cout << left << setw(20) << "Amount Due::" << "$" << right << totalCost + tax << endl;
    return 0;
}