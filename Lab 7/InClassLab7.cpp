#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "InClassLab7Header.h"

void getData(ifstream& infile, Student studentArray[], int listSize);

int main() {


    ifstream inFile;
    ofstream outFile;
    Student studentArray[6];


struct Student {

	string id;
	string name;
	double mathSkills;
	double scienceSkills;
	double presentationSkills;
	double computerSkills;
	double musicSkills;
    string bestSkill = "";
};

for (int i = 0; i < 6; i++) {
   
    inFile >> studentArray[i].id 
    >> studentArray[i].name 
    >> studentArray[i].mathSkills
    >> studentArray[i].scienceSkills 
    >> studentArray[i].presentationSkills
    >> studentArray[i].musicSkills;
    cin.ignore();

}

}

