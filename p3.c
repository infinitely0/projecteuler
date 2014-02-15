#include <stdio.h>

int main(void)
{
	long long n = 600851475143LL;
	int i;

	for (i = 2; i < n; i++) {
		while (n % i == 0) {
			n /= i;
		}
	}

	printf("%d\n", n);

	return 0;
}
