#include<iostream>
#include<cassert>
#include<string>

using namespace std;

int main()
{
	int s = 0, min = 0, hr = 0, days = 0, year = 0, feb = 28;
	string month = " ";
	bool leap = false;
	string month = "none";
	

	cin >> year >> s;

	if (year % 4 == 0)
	{	
		leap = true;
		feb = 29;
	}

	
	min = s / 60;
	hr = min / 60;
	days = hr / 24;
	s = s % 60;
	min = min % 60;
	hr = hr % 24;






	if (day <= 31)
	{
		month = "January";
	} else if (day <= (31 + feb))
	{	
		month = "February";
	} else if (day <= (62 + feb))
	{
		month = "March";
	} else if (day <= (92 + feb))
	{
		month = "April";
	} else if ( day <= (123 + feb))
	{
		month = "May";
	} else if (day <= (153 + feb))
	{
		month = "";
	} case 7:
		numOfDays = 31;
		break;
	case 8:
		numOfDays = 31;
		break;
	case 9:
		numOfDays = 30;
		break;
	case 10:
		numOfDays = 31;
		break;
	case 11:
		numOfDays = 30;
		break;
	case 12:
		numOfDays = 31;	
		break;

	default:
		cout << "Invalid input" << endl;
		return 0;
	}








	return 0;
}
	
		

















	return 0;
}
