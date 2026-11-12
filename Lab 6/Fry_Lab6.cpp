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

void displayJobs(const string jobs[], const int salaryRanges[][2], const double avgSalary[], int numJobs);
void sortJobs(string jobs[], int salaryRanges[][2], double avgSalary[], int numJobs);

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

    string jobs[20];
    int salaryRanges[20][2];
    double avgSalary[20];
    int numJobs = 0;

    //Read at most 20 jobs, each stored as a title line followed by a salary range line
    string jobTitle, jobSalary;
    while (numJobs < 20 && getline(inFile, jobTitle) && getline(inFile, jobSalary)) {
        //Split a range such as "29000 - 56000" at the dash
        size_t dash = jobSalary.find('-');

        jobs[numJobs] = jobTitle;
        salaryRanges[numJobs][0] = stod(jobSalary.substr(0, dash));
        salaryRanges[numJobs][1] = stod(jobSalary.substr(dash + 1));
        avgSalary[numJobs] = (salaryRanges[numJobs][0] + salaryRanges[numJobs][1]) / 2.0;
        numJobs++;
    }
    inFile.close();

    if (numJobs == 0) {
        cout << "No job data found in file: " << filename << endl;
        return 1;
    }

    cout << fixed << setprecision(2);

    cout << "Job Salary Data";
    displayJobs(jobs, salaryRanges, avgSalary, numJobs);

    //Find the lowest and highest average salary
    int lowestIndex = 0;
    int highestIndex = 0;
    for (int i = 1; i < numJobs; i++) {
        if (avgSalary[i] < avgSalary[lowestIndex]) {
            lowestIndex = i;
        }
        if (avgSalary[i] > avgSalary[highestIndex]) {
            highestIndex = i;
        }
    }

    cout << "Lowest average salary:  " << avgSalary[lowestIndex] << " (" << jobs[lowestIndex] << ")\n";
    cout << "Highest average salary: " << avgSalary[highestIndex] << " (" << jobs[highestIndex] << ")\n";

    sortJobs(jobs, salaryRanges, avgSalary, numJobs);

    cout << "\nJobs Sorted by Average Salary (Ascending)\n";
    displayJobs(jobs, salaryRanges, avgSalary, numJobs);

    return 0;
}

//Displays the job title, low salary, high salary, and average salary in a table
void displayJobs(const string jobs[], const int salaryRanges[][2], const double avgSalary[], int numJobs) {
    cout << left << setw(48) << "Job Title"
         << right << setw(12) << "Low" << setw(12) << "High" << setw(14) << "Average" << endl;
    cout << string(86, '-') << endl;

    for (int i = 0; i < numJobs; i++) {
        cout << left << setw(48) << jobs[i]
             << right << setw(12) << salaryRanges[i][0]
             << setw(12) << salaryRanges[i][1]
             << setw(14) << avgSalary[i] << endl;
    }
}

//Selection sort: orders jobs by average salary in ascending order, swapping
//all three parallel arrays together so each job keeps its own data
void sortJobs(string jobs[], int salaryRanges[][2], double avgSalary[], int numJobs) {
    for (int i = 0; i < numJobs - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < numJobs; j++) {
            if (avgSalary[j] < avgSalary[minIndex]) {
                minIndex = j;
            }
        }
    }
}

  