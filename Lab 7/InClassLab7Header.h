#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

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

Student studentArray[6];


