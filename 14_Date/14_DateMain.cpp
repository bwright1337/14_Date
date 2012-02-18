#include <iostream>
#include "14_Date.h"
using namespace std;

int main()
{
	int usernum;
	DayOfYear daypicked;

	// instructions should tell user 1-365
	// while loop that keeps going until you get a valid response
	do {
		cout << "\nEnter a day number between 1 and 365 and I will display \nthe month and day of the month that it is. \n";
		cin >> usernum;
	} while (usernum < 1 || usernum > 365);
	daypicked.showdate(usernum);
	
	system("pause");
}