#include <stdio.h>
#include <stdlib.h>

#define MAX	28123

// inefficient
int is_abundant(int n)
{
        int i;
        int sum = 0;
        for (i = 1; i <= (n / 2); i++) {
                if (n % i == 0)
                        sum += i;
        }
        return sum > n;
}

int main()
{
        int abundant_count;
        int *abundant_numbers;
        int numbers[MAX+1] = { 0 };
        int i, c, k, sum;
        int present;

        // count abundant numbers
        abundant_count = 0;
        for (i = 1; i < MAX; i++) {
                if (is_abundant(i))
                        abundant_count++;
        }
        abundant_numbers = malloc(abundant_count * sizeof(int));

        // store abundant numbers
        k = 0;
        for (i = 1; i < MAX; i++) {
                if (is_abundant(i))
                        abundant_numbers[k++] = i;
        }

        // mark integers that CAN be written
        // as the sum of two abundant numbers
        for (i = 0; i < abundant_count; i++) {
                for (k = i; k < abundant_count; k++) {
                        sum = abundant_numbers[i] + abundant_numbers[k];
                        if (sum <= MAX)
				numbers[sum] = 1;	
			else
				break;
                }
        }

        // sum numbers that are not marked in the array
	sum = 0;
	for (i = 1; i <= MAX; i++)
		if (!numbers[i])
			sum += i; 

	printf("%d", sum);
        return 0;
}
