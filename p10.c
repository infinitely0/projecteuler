#include <stdio.h>

int is_prime(int n)
{
	int i;

	for (i = 2; i * i <= n; i++) {

		if (n % i == 0)
			return 0;
	}

	return 1;
}

int main(void)
{
	long long sum = 0;
	int p = 2;

	while (p < 2000000) {

		if (is_prime(p))
			sum += p;
		p++;
	}

	printf("%lld\n", sum);

	return 0;
}
