#include <iostream>

using namespace std;

void showMenu();
void orderCoffee();


int main() {
    
    int choice;
    int numCups;
    
    do {
        showMenu();

        cin >> choice;
        cout << endl;

        switch(choice) {
            case 1:
                cout << "Enter the number of cups: ";
                cin >> numCups;
                orderCoffee();
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 9:
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

    } while(choice != 9);

    return 0;
}

void showMenu() {
    cout << "1: Enter 1 to order coffee." << endl;
    cout << "2: Enter 2 to check the total money made up to this time." << endl;
    cout << "3: Enter 3 to check the total amount of coffee sold up to this time." << endl;
    cout << "4: Enter 4 to check th number of cups of coffee of each size sold." << endl;
    cout << "5: Enter 5 to print the data." << endl;
    cout << "9: Enter 9 to exit the program." << endl;
}

void orderCoffee() {
    cout << "1: Enter 1 to buy a small cup size (9 oz)" << endl;
    cout << "2: Enter 2 to buy a medium cup size (12 oz)" << endl;
    cout << "3: Enter 3 to buy a large cup size (15 oz)" << endl;
    cout << "9: Enter 9 to exit." << endl;
}