#include<iostream>
#include <iomanip>  

using namespace std;

// declare function prototypes
void getAttemptAndCompletes(int& attempts, int& completions, int yardage = 26);
void getValidInput(int& attempts, int& completions, int yardage);
double calcPercent(int attempts, int completions);
int main()
{
	// declare variables
	int num15attempts = 0;
	int num15completions = 0;
	int num25attempts = 0;
	int num25completions = 0;
	int num25moreattempts = 0;
	int num25morecompletions = 0;

	// call the function and assign the values to the variables for both attempts or completions for different yardage
	getAttemptAndCompletes(num15attempts, num15completions, 15);
	getAttemptAndCompletes(num25attempts, num25completions, 25);
	getAttemptAndCompletes(num25moreattempts, num25morecompletions);

	// output including calling percentage function
	cout << fixed << showpoint << setprecision(2) << endl;
	cout << "Percentage of passing between 0 - 15 yards is "  << calcPercent(num15attempts, num15completions) << endl;
	cout << "Percentage of passing between 16 - 25 yards is " <<  calcPercent(num25attempts, num25completions) << endl;
	cout << "Percentage of passing more than 25 yards is " << calcPercent(num25moreattempts, num25morecompletions) << endl;
	return 0;
}

void getAttemptAndCompletes(int& attempts, int& completions, int yardage) {
	if (yardage <= 15) {
	cout << "Enter the number of attempts followed by completes from 0 - "<< yardage << " yards: ";
	} else if (yardage >15 && yardage <=25) {
		cout << "Enter number of attempts followed by completes from 16 - " << yardage << " yards: ";
	} else {
		cout << "Enter number of attempts followed by completes from more than 25 yards: ";
	}
	cin >> attempts >> completions;
	getValidInput(attempts, completions, yardage);
}

void getValidInput(int& attempts, int& completions, int yardage) {
	if (attempts < 0 || completions < 0 || completions > attempts || cin.fail()) {
		cout << "Please re-enter valid values." << endl;
		cin.clear();
		cin.ignore();
		getAttemptAndCompletes(attempts, completions, yardage);
		return;
	}
}

double calcPercent(int attempts, int completions) {
	if (attempts == 0)
		return 0;
	return (double)completions / attempts;
}