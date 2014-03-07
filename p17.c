#include <stdio.h>

int main()
{
	// Word lengths
	int ONE_NINE = 36;
	int TEN = 3;
	int ELEVEN_NINETEEN = 67;
	int TWENTY_NINETY = 47;
	int ONE_HUNDRED = 10;
	int ONE_THOUSAND = 11;
	int HUNDRED = 7;
	int AND = 3;

	// 1 to 99
	int _1_99 = ONE_NINE + TEN + ELEVEN_NINETEEN
		+ (TWENTY_NINETY * 10) + (ONE_NINE * 8);

	// 100 to 999
	int _100_999 = (ONE_NINE * 100) + (HUNDRED * 9)
		+ ((HUNDRED + AND) * 99 * 9) + (_1_99 * 9);

	int total = _1_99 + _100_999 + ONE_THOUSAND; 

	printf("%d", total);
	
	return 0;
}
