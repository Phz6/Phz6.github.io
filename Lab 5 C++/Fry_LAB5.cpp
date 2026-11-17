#include <iostream>
#include <iomanip>
#include <string>
#include "Fry_LAB5.h"
#include <fstream>


int main() {
    ofstream outfile;
    ifstream inputfile;

    inputfile.open("flavors.txt");
        if (!inputfile) {
            cout << "Error opening file." << endl;
            return 1;
        }
    outfile.open("flavors_report.txt");
        if (!outfile) {
            cout << "Error opening file." << endl;
            return 1;
        }
    
}