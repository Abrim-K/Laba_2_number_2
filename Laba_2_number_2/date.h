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
		cout << "Memory has been cleaned." << endl;
	}
	void leap();
	void change();
	void print();
};