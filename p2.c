#include <stdio.h>

int fibonacci_even_sum(int max)
{
	int f = 0;
	int f_1 = 2;
	int f_2 = 1;

	int sum = 2;

	while (f < max) {
		f = f_1 + f_2;

		f_2 = f_1;
		f_1 = f;

		if (f % 2 == 0)
			sum += f;
	}

	return sum;
}

int main(void)
{
	printf("%d", fibonacci_even_sum(4000000));

	return(0);
}
