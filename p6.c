#include <stdio.h>

int main(void)
{
	int i;
	int n = 100;
	int sum_of_squares = 0;

	for (i = 1; i <= n; i++) {

		sum_of_squares += i * i;

	}

	int series = (double) (n * (n + 1)) / 2;
	int square_of_sum = series * series;

	int difference = square_of_sum - sum_of_squares;
	printf("%d\n", difference);

	return 0;
}
