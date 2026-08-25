#include <iostream>
#include <string>
using namespace std;   

int main {

    const  int SECONDS_PER_MINUTE = 60; \\set constants for seconds per minute, hours per day, and minutes per hour
    const  int HOURS_PER_DAY = 24;
    const int MINUTES_PER_HOUR = 60;

    int hours, minutes, seconds;  

    cout<< "Enter the number of seconds the event lasted:"  \\prompting user for time in seconds to convert to hours, minutes, and seconds
    cin>> seconds;
    cout<< endl;

    cout<< "The event lasted for " << seconds / SECONDS_PER_MINUTE / MINUTES_PER_HOUR << " hours, " \\conversion of time in seconds to hours, minutes, and seconds
        << (seconds / SECONDS_PER_MINUTE) % MINUTES_PER_HOUR << " minutes, and "
        << seconds % SECONDS_PER_MINUTE << " seconds." << endl;

}