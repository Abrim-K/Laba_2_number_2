#include <iostream>

using namespace std;

class Date
{
	unsigned day;
	unsigned month;
	unsigned year;
public:
	Date(unsigned p_day = 1, unsigned p_month = 1, unsigned p_year = 2000)
	{
		day = p_day;
		month = p_month;
		year = p_year;
	}
	~Date()
	{
		cout << "Memory has been cleaned.";
	}
	void fun_1()
	{
		if (year % 4 == 0)
		{
			cout << "it's a leap year" << endl;
		}
		else
		{
			cout << "it's not a leap year" << endl;
		}
	}
	void fun_2()
	{
		if (((month == 1) or (month == 3) or (month == 5) or (month == 7)
			or (month == 8) or (month == 10) or (month == 12)) and (day > 26))
		{
			if (month == 12)
			{
				day = day - 26;
				month = 1;
				year++;
			}
			else
			{
				day = day - 26;
				month++;
			}
		}
		else if (((month == 4) or (month == 6)
			or (month == 9) or (month == 11)) and (day > 25))
		{
			day = day - 25;
			month++;
		}
		else if ((month == 2) and (day > 24) and (year % 4 == 0))
		{
			day = day - 24;
			month++;
		}
		else if ((month == 2) and (day > 23) and (year % 4 != 0))
		{
			day = day - 23;
			month++;
		}
		else
		{
			day = day + 5;
		}
	}
	void print()
	{
		cout << "date: " << day << "." << month << "." << year << endl;
	}
};