#include <iostream>
#include <iomanip>
#include <string>
#include "Lab5.h"
#include <fstream>

 using namespace std;
 using namespace icecream;

int main() {
  ifstream infile("flavors.txt");
  ofstream outfile("flavors_report.txt");
  string firstName, lastName;
  double vScore, cScore, sScore, bScore, oScore;

  if (!infile) {
        cout << "Error opening input file." << endl;
        return 1;
    }

    if (!outfile) {
        cout << "Error opening output file." << endl;
        return 1;
    }

        while (infile >> lastName >> firstName >> vScore >> cScore >> sScore >> bScore >> oScore) {
   
    getRating(vScore, cScore, sScore, bScore, oScore);
    getFavoriteFlavor(vScore, cScore, sScore, bScore, oScore);
    convertRateToMessage(int chocolateCount, int strawberryCount, int bananaCount, int oreoCount);

        }
}