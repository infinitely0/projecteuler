#include <stdio.h>

int main(void)
{
	int count = 1;
	int term, longest_seq = 0;
	int i;
	unsigned long n;

	for (i = 499999; i < 999999; i++) {

		n = i;
		while (n != 1) {

			if (n % 2 == 0)
				n /= 2;
			else
				n = (3 * n) + 1;

			count++;
		}
		if (count > longest_seq) {
			longest_seq = count;
			term = i;
		}

		count = 1;
		n = 1;
	}

	printf("%d\n", term);
	return 0;
}
