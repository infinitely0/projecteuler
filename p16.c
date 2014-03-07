#include <stdio.h>

int main()
{
	int digits[1000] = { 0 };
	digits[999] = 2;

	int i, tmp;
	int exp = 1000;
	int carry = 0;

	while (exp > 1) {
		for (i = 999; i >= 0; i--) {
			tmp = (digits[i] * 2) + carry;  
			digits[i] = tmp % 10;
			carry = tmp / 10;
		}
		exp--;
	}
	
	int sum = 0;

	for (i = 0; i < 1000; i++)
		sum += digits[i];

	printf("%d\n", sum);
	return 0;
}
