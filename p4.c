#include <stdio.h>

int is_palindrome(int n)
{
	int original = n;
	int last;
	int reverse = 0;

	while (n > 0) {
		last = n % 10;
		reverse *= 10;
		reverse += last;
		n /= 10;
	}

	return original == reverse;
}

int main(void)
{
	int i, j;
	int n = 0;
	int max = 0;

	for (i = 1; i <= 999; i++) {
		for (j = 1; j <= 999; j++) {

			int n = i * j;

			if (is_palindrome(n) && n > max)
				max = n;
		}
	}

	printf("%d\n", max);

	return 0;
}
