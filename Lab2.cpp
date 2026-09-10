//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std; 
setw(20);

int main() {
       
    double salary;
    string lastName, buildingLocation, employmentStatus;
    char buildingCode;

        cout << "Enter last name:";
        cin >> lastname;

        cout << "Enter building code:";
        cin >> buildingCode;
            if (buildingCode == 'N') {
                buildingLocation = "Wake, North Carolina";

            else if (buildingCode == 'D') {
                buildingLocation = "Washington, DC";
            }
            else if (buildingCode == 'V') {
                buildingLocation = "Las Vegas, Nevada";
            }
            else if (buildingCode == 'T') {
                buildingLocation = "Austin, Texas";
            }
            else {
                cout << "BUILDING CODE ERROR" << endl;
            }
            }
    

        cout << "Enter Salary:";
        cin >> salary;

        cout << "Enter employment status (enter 1 for full-time, 2 for part-time):";
        cin >> employmentStatus;
            if (employmentStatus == "1") {
                employmentStatus = "Full-time";
                newSalary = (salary * .03) + salary;
            }
            else if (employmentStatus == "2") {
                employmentStatus = "Part-time";
                newSalary = (salary +500);
            }
            else {
                cout << "Invalid input for employment status." << endl;
            }

        cout << string (80, '-') << endl;
        
        cout << fixed << setprecision(2) << setw(20) << "Last Name: " << lastName << endl\
             << setw(20) << "Building Code: " << buildingCode << endl\
             << setw(20) << "Building Location: " << buildingLocation << endl\
             << setw(20) << "Employment Status: " << employmentStatus << endl\
             << setw(20) << string(20, '-') << endl\
             << setw(20) << setfill('.') << "Current Salary: $" << salary << endl\
             << setw(20) << setfill('.') << "New Salary: $" << newSalary << endl;


}