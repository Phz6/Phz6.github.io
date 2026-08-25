#include <iostream>
#include <string>
using namespace std;   

int main {

    const  int SECONDS_PER_MINUTE = 60;
    const  int HOURS_PER_DAY = 24;
    const int MINUTES_PER_HOUR = 60;

    int hours, minutes, seconds;

    cout<< "Enter the number of seconds the event lasted:"
    cin>> seconds;
    cout<< endl;

    cout<< "The event lasted for " << seconds / SECONDS_PER_MINUTE / MINUTES_PER_HOUR << " hours, "
        << (seconds / SECONDS_PER_MINUTE) % MINUTES_PER_HOUR << " minutes, and "
        << seconds % SECONDS_PER_MINUTE << " seconds." << endl;

}