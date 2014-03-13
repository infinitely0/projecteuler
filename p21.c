#include <stdio.h>

int d(int n)
{
	int i;
	int sum = 0;
	for (i = 1; i <= (n / 2); i++) {
		if (n % i == 0)
			sum += i;
	}
	return sum;
}

int main()
{
	int sum = 0;
	int a, b;
	
	for (a = 1; a < 10000; a++) {
		b = d(a);
		if (a == d(b) && a != b)
			sum += (a);
	
	}

	printf("%d\n", sum);
	return 0;
}
