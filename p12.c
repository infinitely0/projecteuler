#include <stdio.h>

int no_of_divisors(int n)
{
	int divisors = 1;
	int power;
	int i;

	for (i = 2; i <= n; i++) {

		power = 0;

		while (n % i == 0) {

			power++;
			n /= i;

		}

		// n = a^x * b^y * c^z
		// d = (x + 1)(y + 1)(z + 1)
		divisors *= power + 1;

	}

	return divisors;

}

int main(void)
{
	int i = 2;
	int triangle = 1;

	while (no_of_divisors(triangle) < 500) {

		triangle += i;
		i++;

	}
	
	printf("%d\n", triangle);

	return(0);
}
