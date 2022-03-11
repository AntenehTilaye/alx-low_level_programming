#include <stdlib.h>
#include <time.h>

/**
 * main- starting point
 * Return: returns 0 for os
 * Description: this program checks if the number is positive or not
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
		printf("%d is negative", n);
	else if (n > 0)
		printf("%d is positive", n);
	else
		printf("%d is zero", n);
	return (0);
}
