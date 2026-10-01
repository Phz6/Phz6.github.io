#include<iostream>
#include <iomanip>  

using namespace std;

// declare function prototypes
void getAttemptAndCompletes( , , );
void getValidInput( , );
double calcPercent( , );

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
