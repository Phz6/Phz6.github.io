//***
// Program:     Fry_Lab6
// Author:      Justin Fry
// Course:      CSC134 C++ Programming
// Assignment:  Lab 6 - Arrays and Strings
// Date:        11/09/2026
//
// Description: Reads job titles and salary ranges from a text file entered
//              by the user (job-salaries.txt or job-salaries2.txt). Each job
//              is stored using parallel arrays: titles in a 1D string array,
//              low and high salaries in a 2D int array, and average salaries
//              in a 1D double array. The program displays every job with its
//              salaries, reports the jobs with the highest and lowest average
//              salary, then sorts the jobs by average salary in ascending
//              order with a selection sort and displays them again.
//
// Input:       A text file in which each job takes two lines: the job title,
//              followed by a salary range such as "29000 - 56000".
// Output:      Formatted tables of job salary data printed to the screen.
//****

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>


using namespace std;

void displayJobs(const string jobs[], const int salaryRanges[][2], const double avgSalary[], int numJobs);
void sortJobs(string jobs[], int salaryRanges[][2], double avgSalary[], int numJobs);

int main() {
    const int MAX_JOBS = 20;
    string filename;
    ifstream inFile;

    cout << "Enter the name of the input file (job-salaries.txt or job-salaries2.txt): ";
    cin >> filename;

    inFile.open(filename);
    if (!inFile) {
        cout << "Error opening file: " << filename << endl;
        return 1;
    }

    string jobs[MAX_JOBS];
    int salaryRanges[MAX_JOBS][2];
    double avgSalary[MAX_JOBS];
    int numJobs = 0;

    //Read at most 20 jobs, each stored as a title line followed by a salary range line
    string jobTitle, jobSalary;
    while (numJobs < MAX_JOBS && getline(inFile, jobTitle) && getline(inFile, jobSalary)) {
        //The data files were saved on Windows, so remove a trailing '\r' if one is there
        if (!jobTitle.empty() && jobTitle.back() == '\r') {
            jobTitle.pop_back();
        }
        if (!jobSalary.empty() && jobSalary.back() == '\r') {
            jobSalary.pop_back();
        }

        //Split a range such as "29000 - 56000" at the dash
        size_t dash = jobSalary.find('-');
        if (dash == string::npos) {
            continue;   //skip a line that is not a salary range
        }

        jobs[numJobs] = jobTitle;
        salaryRanges[numJobs][0] = stoi(jobSalary.substr(0, dash));
        salaryRanges[numJobs][1] = stoi(jobSalary.substr(dash + 1));
        avgSalary[numJobs] = (salaryRanges[numJobs][0] + salaryRanges[numJobs][1]) / 2.0;
        numJobs++;
    }
    inFile.close();

    if (numJobs == 0) {
        cout << "No job data found in file: " << filename << endl;
        return 1;
    }

    cout << fixed << setprecision(0);

    cout << endl;
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

    cout << "\n\nThis job has the highest average salary:\n";
    cout << string(41, '-') << endl;
    cout << left << setw(48) << jobs[highestIndex] << avgSalary[highestIndex] << endl;

    cout << "\nThis job has the lowest average salary:\n";
    cout << string(40, '-') << endl;
    cout << left << setw(48) << jobs[lowestIndex] << avgSalary[lowestIndex] << endl;

    sortJobs(jobs, salaryRanges, avgSalary, numJobs);

    cout << "\nThe jobs are sorted by average salary in ascending order:\n";
    displayJobs(jobs, salaryRanges, avgSalary, numJobs);

    return 0;
}

//Displays the job title, low salary, high salary, and average salary in a table
void displayJobs(const string jobs[], const int salaryRanges[][2], const double avgSalary[], int numJobs) {
    cout << left << setw(48) << "Job"
         << right << setw(18) << "Low Salary"
         << setw(18) << "High Salary"
         << setw(18) << "Average Salary" << endl;
    cout << string(102, '-') << endl;

    for (int i = 0; i < numJobs; i++) {
        cout << left << setw(48) << jobs[i]
             << right << setw(18) << salaryRanges[i][0]
             << setw(18) << salaryRanges[i][1]
             << setw(18) << avgSalary[i] << endl;
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

        //Move the smallest remaining job into position i, using a temporary
        //variable for each array so no value is overwritten before it is saved
        if (minIndex != i) {
            string tempJob = jobs[i];
            jobs[i] = jobs[minIndex];
            jobs[minIndex] = tempJob;

            int tempLow = salaryRanges[i][0];
            salaryRanges[i][0] = salaryRanges[minIndex][0];
            salaryRanges[minIndex][0] = tempLow;

            int tempHigh = salaryRanges[i][1];
            salaryRanges[i][1] = salaryRanges[minIndex][1];
            salaryRanges[minIndex][1] = tempHigh;

            double tempAvg = avgSalary[i];
            avgSalary[i] = avgSalary[minIndex];
            avgSalary[minIndex] = tempAvg;
        }
    }
}
