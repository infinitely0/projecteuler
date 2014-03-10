#include <stdio.h>

int is_leap_year(int year)
{
	return (year % 4 == 00 && year % 100 != 0) || year % 400 == 0;
}

int days_in_month(int month, int year)
{
	if (month == 4 || month == 6 || month == 9|| month == 11) {
		return 30;
	}
	else if (month == 2) {
		if (is_leap_year(year))
			return 29;
		else
			return 28;
	}
	else {
		return 31;
	}
}

int main()
{
	int day = 1;
	int days;
	int month = 1;
	int year = 1901;
	int count = 0;
	int weekday = 1; // 1 = Tuesday (1st Jan 1901)

	for (year; year < 2001; year++) {
		for (month; month < 13; month++) {
			days = days_in_month(month, year);
			for (day; day <= days; day++) {

				if (day == 1 && weekday == 6)
					count++;

				weekday = (weekday + 1) % 7;
			}
			day = 1;
		}
		month = 1;
	}
	printf("%d\n", count);
	return 0;
}
