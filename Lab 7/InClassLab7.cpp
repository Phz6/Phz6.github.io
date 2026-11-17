#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "InClassLab7Header.h"

string getBestSkill(Student studentArray[]);

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

string getBestSkill() {
    
    for (int i = 0; i < 6; i++) 
        
        if (studentArray[i].mathSkills > studentArray[i].scienceSkills &&
        studentArray[i].mathSkills > studentArray[i].presentationSkills &&
        studentArray[i].mathSkills > studentArray[i].musicSkills) 
        
            cout << studentArray[i].name << " best skill is Math" << endl;
        
        else if (studentArray[i].scienceSkills > studentArray[i].mathSkills &&
        studentArray[i].scienceSkills > studentArray[i].presentationSkills &&
        studentArray[i].scienceSkills > studentArray[i].musicSkills)

            cout << studentArray[i].name << " best skill is Science" << endl;

        else if (studentArray[i].musicSkills > studentArray[i].mathSkills &&
        studentArray[i].musicSkills > studentArray[i].presentationSkills &&
        studentArray[i].musicSkills > studentArray[i].scienceSkills)
            
            cout << studentArray[i].name << " best skill is Music" << endl;
        
        else if (studentArray[i].presentationSkills > studentArray[i].mathSkills &&
        studentArray[i].presentationSkills > studentArray[i].musicSkills &&
        studentArray[i].presentationSkills > studentArray[i].scienceSkills)

            cout << studentArray[i].name << " best skill is Presentation" << endl;

        
    }

