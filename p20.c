#include <stdio.h>
#include <gmp.h>

int main()
{
	mpz_t n;
	mpz_init(n);
	int sum = 0;

	mpz_set_ui(n, 1);

	unsigned long int i;
	for (i = 2; i < 100; i++) {
		mpz_mul_ui(n, n, i);
	}
	
	char *digits = mpz_get_str(NULL, 10, n);

	i = 0;
	while (digits[i] != '\0')
		sum += digits[i++] - '0';

	printf("%d\n", sum);

	mpz_clear(n);

	return 0;
}
