#include "DateFuncs.h"

bool IsLeapYear(int year)
{
	return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

int LaterInYear(int d1, int d2)
{
	if (d1 > d2)
		return d1;
	else
		return d2;
}

int DaysInYear(int year)
{
	if (IsLeapYear(year))
		return 366;
	else
		return 365;
}

int DaysInYearRange(int year1, int year2)
{
	int sum = 0;
	for (int i = year1; i <= year2; i++)
		sum += DaysInYear(i);
	return sum;
}