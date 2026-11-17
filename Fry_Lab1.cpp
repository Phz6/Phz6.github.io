//Two cars A and B leave an intersection at the same time. Car A travels west at an
//average speed of x miles per hour and car B travels south at an average speed of 
//y miles per hour. This program outputs the (shortest) distance between the cars
//after a given set of time.


#include <iostream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;

int main() {

    double carAspd, carBspd, hours, mins, elpsdTime, carAdist, carBdist, result;

    cout << "Enter the average speed of the first Car (mph):";                     
    cin >> carAspd;                                                             //User sets the speed of car A
    
    cout << "Enter the average speed of the seoncd Car (mph)";
    cin >> carBspd;                                                             //User sets the speed of car B
            
    cout << "Enter the elapsed time in hors and minutes (Ex 1hr 30 minutes = 1 30):";
    cin >> hours >> mins;                                                       //User enters time in hours + minutes

    elpsdTime = hours + (mins/60);                                              //Converting hours and minutes into total hours
    
    carAdist = carAspd * elpsdTime;                                             //Calculating distance traveled for car A
    
    carBdist = carBspd * elpsdTime;                                             //Calculating distance traveled for car B

    result = sqrt(pow(carAdist,2) + pow(carBdist,2));                           //Shortest distance calculation


    cout << "THAT WAS EASY! The shortest distancte between the cars is:";           
    cout << fixed << setprecision(2) << result;                                 //Outputs final results
}








    
}