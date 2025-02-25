#include <iostream>
#include "date.h"

using namespace std;

int main() {
	Date* now = new Date;
	now->print();
	unsigned day, month, year;
	cout << "Day: ";
	cin >> day;
	cout << "Month: ";
	cin >> month;
	cout << "Year: ";
	cin >> year;
	now = new Date(day, month, year);
	now->print();
	now->fun_1();
	now->fun_2();
	cout << "after change:" << endl;
	now->print();
	now->fun_1();
	delete now;
}