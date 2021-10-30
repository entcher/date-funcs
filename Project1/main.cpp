#include <ctime>
#include <assert.h>

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

int main()
{

}