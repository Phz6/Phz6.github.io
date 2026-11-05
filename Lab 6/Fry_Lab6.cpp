//Develop a C++ program “YourLastname_Lab6” which reads data from the attached text 
//files “job-salaries.txt” and job-salaries2.txt. Your program should prompt the user 
//for the name of the input file name. Your program should be able to run with either 
//input file and will require you to run your program twice, once for each file. 
//After the file is opened successfully, your program should perform the following data 
//analytic tasks: 

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string filename;
    ifstream inFile;

    cout << "Enter the name of the input file (job-salaries.txt or job-salaries2.txt): ";
    cin >> filename;

    inFile.open(filename);
    if (!inFile) {
        cout << "Error opening file: " << filename << endl;
        return 1;
    }

    string jobInform, jobTitle;
    double lowSalary= 0.0;
    double highSalary= 0.0;
    double avgSalary = 0.0;
    int count = 0;
    
    getline(inFile, jobInform, ',');

    inFile.close();


    return 0;
}
