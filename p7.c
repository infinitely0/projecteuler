#include <stdio.h>

int is_prime(int n) {

	int i;

	for (i = 2; i * i <= n; i++) {

		if (n % i == 0)
			return 0;
	}

	return 1;
}

int main(void)
{

	int count = 0;
	int n = 0;

	while (count < 10001) {
		n++;
		if (is_prime(n))
			count++;
	}

	printf("%d\n", n);

	return 0;
}
