#include "14_Date.h"
#include <iostream>
#include<string>
using namespace std;

const string DayOfYear::month[12] = {"January", "February", "March", "April", "May", "June", "July" "August", "September", "October", "November", "December"};
const int DayOfYear::dayOfMonth[13] = {31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335, 365, 9999 };

// callers must pass n between 1 and 365
void DayOfYear::showdate(int n)
{
	int monthIndex = 0;

	for (monthIndex = 0; monthIndex < 12; monthIndex++) {
		if (n < dayOfMonth[monthIndex])
			break;
	}
	int theDay = n;
	if (monthIndex > 0) {
		theDay = n - dayOfMonth[monthIndex-1];
	}

	cout << "Day: " << n << " is " << month[monthIndex] << " " << theDay <<  endl;
}

