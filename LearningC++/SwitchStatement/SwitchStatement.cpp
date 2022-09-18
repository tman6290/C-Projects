

#include <iostream>
using namespace std;

string whatDayIsIt();

int main()
{
    cout << "Today is " << whatDayIsIt() << "!" << " HOORAY!!! :)" << endl;

}

string whatDayIsIt() {

    int dayNumber;
    string day;
    cout << "Enter a number from 1 to 7:" << endl;
    cin >> dayNumber;
    
    switch (dayNumber) {
    case 1:
        day = "Monday";
        break;

    case 2:
        day = "Tuesday";
        break;

    case 3:
        day = "Wednesday";
        break;

    case 4:
        day = "Thursday";
        break;

    case 5:
        day = "Friday";
        break;

    case 6:
        day = "Saturday";
        break;

    case 7:
        day = "Sunday";
        break;

    default:
        day = "INVALID INPUT";
        break;

    }

    return day;
    

}

