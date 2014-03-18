#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAMES			5163
#define MAX_LENGTH		15

// compare function for quicksort
int compar(char *a, char *b) {
	return strcmp(a, b);
}

int main(void)
{
	int c, i, l, n = 0;
	int sum = 0, score = 0;
	char name[MAX_LENGTH];
	char names[NAMES][MAX_LENGTH];
	char letter;

	FILE *f;
	f = fopen("names.txt", "r");

	// put strings into array
	while ((c = getc(f)) != EOF) {
		// get " (ignore ,)
		if (c == '"') {
			// next char (ignore ")
			c = getc(f);
			i = 0;
			// concat letters until next "
			while (c != '"') {
				name[i++] = c;
				c = getc(f);
			}
			// end string
			name[i] = (char) '\0';
			strcpy(names[n++], name);
		}
	}

	// sort
	qsort(names, NAMES, sizeof(names[0]), compar);

	// calculate scores
	for (n = 0; n < NAMES; n++) {
		l = 0;
		score = 0;
		while (names[n][l] != '\0')
			// sum value of letters (A = 65 in ASCII)
			score += names[n][l++] - 64;

		// multiply by position
		score *= n+1;
		sum += score;
	}

	printf("%d\n", sum);

	fclose(f);
	return 0;
}
