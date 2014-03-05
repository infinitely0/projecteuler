#include <stdio.h>
#include <stdlib.h>

// Calculate two rows of Pascal's triangle at a time
// Find max value of final row
int main()
{
	// For n*n grid, Pascal's row 2n + 1
	int FINAL_ROW = 41;

	int i, k;
	unsigned long long max = 0;

	// Top row starts with 0 1 0
	unsigned long long *row = calloc(1, 3 * sizeof(unsigned long long));
	row[1] = 1;

	// Calculate values in next row using values in previous
	unsigned long long *next_row = { 0 };

	// Start at 4 (row number 2, plus two spaces for zeros on either end)
	for (i = 4; i < FINAL_ROW + 3; i++) {
		next_row = calloc(1, i * sizeof(unsigned long long));
		next_row[0] = 0;
		next_row[i - 1] = 0;

		for (k = 1; k < i - 1; k++)
			next_row[k] = row[k - 1] + row[k];

		free(row);
		row = calloc(1, i * sizeof(unsigned long long));
		memcpy(row, next_row, i * sizeof(unsigned long long));
		free(next_row);
	}

	// Find max in final row
	for (i = FINAL_ROW / 4; i < FINAL_ROW; i++) {
		if (row[i] > max)
			max = row[i];
	}

	free(row);

	printf("%llu\n", max);
	return 0;
}
