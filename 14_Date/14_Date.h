#ifndef Date_H
#define Date_H
#include <iostream>
#include <string>

using namespace std;
//Declare the class
class DayOfYear
{
protected:
	const static string month[];
	const static int dayOfMonth[];

public:
	//Accessor 
	void showdate(int n); 
};
#endif
