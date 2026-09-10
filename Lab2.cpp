//This program will take in the last name, building code, salary, and employment status from the employee. 
// It will then calculate a new salary based on the employment status and output all of the 
// information entered and calculated.

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
       
    double salary, newSalary;
    string lastName, buildingLocation, employmentStatus;
    char buildingCode;                      //decleration of variables

        cout << left << "Enter last name:";
        cin >> lastName;

        cout << "Enter building code:";
        cin >> buildingCode;
          switch (buildingCode) {           //switch statement to determine building location based on building code
           
           case 'n':
           case 'N':
                buildingLocation = "Wake, North Carolina";
           
           case 'd':
           case 'D':
                buildingLocation = "Washington, DC";
           
           case 'v':
           case 'V':
                buildingLocation = "Las Vegas, Nevada";
           
           case 't':
           case 'T':
                buildingLocation = "Austin, Texas";
           
           break;
           }

        cout << "Enter Salary:";
        cin >> salary;

        cout << "Enter employment status (enter 1 for full-time, 2 for part-time):";
        cin >> employmentStatus;
            if (employmentStatus == "1") {
                employmentStatus = "Full-time";
                newSalary = (salary * .03) + salary;            //if statement to determine employment status and calculate new salary based on employment status
            }
            else if (employmentStatus == "2") {
                employmentStatus = "Part-time";
                newSalary = (salary +500);
            }
            else {
                cout << "Invalid input for employment status." << endl;
            }

        cout << string (80, '-') << endl;
        
        cout << fixed << setprecision(2) << setw(20) << "Last Name: " << lastName << endl\          //output of all the information entered and calculated
             << setw(20) << "Building Code: " << buildingCode << endl\
             << setw(20) << "Building Location: " << buildingLocation << endl\
             << setw(20) << "Employment Status: " << employmentStatus << endl\
             << setw(20) << string(20, '-') << endl\
             << setw(20) << "Current Salary: $" << setfill('.') << salary << endl\
             << setw(20) << "New Salary: $" << setfill('.') << newSalary << endl;

        }