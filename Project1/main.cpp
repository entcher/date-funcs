#include <ctime>
#include <assert.h>
#include "DateFuncs.h"


int main()
{
	assert(IsLeapYear(400) == true);
	assert(IsLeapYear(2021) == false);

	assert(LaterInYear(12, 13) == 13);
	assert(LaterInYear(13, 12) == 13);

	assert(DaysInYear(400) == 366);
	assert(DaysInYear(125) == 365);

	assert(DaysInYearRange(1, 2) == 365 + 365);
	assert(DaysInYearRange(400, 401) == 366 + 365);
}