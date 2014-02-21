#include <stdio.h>

int main(void)
{
	int a, b, c;

	for (a = 1; a <= 332; a++) {
	
		for (b = 2; b <= 499; b++) {

			c = 1000 - a - b;

			if (a * a + b * b == c * c) {

				printf("%d", a * b * c);
				return(0);

			}


		}

	}

	return(0);
}
