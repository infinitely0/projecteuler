#include <stdio.h>

int main(void)
{
	int i;
	int n = 20;

	for (;;) {
		for (i = 11; i <= 20; i++) {

			if (n % i != 0)
				break;

			if (i == 20) {
				printf("%d\n", n);
				return 0;
			}
		}

		n++;
	}

	return 0;
}
