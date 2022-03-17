#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main- starting point
 * Return: returns 0 for os
 * Description: this program checks if the number is positive or not
 */

void positive_or_negative(int n)
{

	if (n < 0)
		printf("%d is negative\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is zero\n", n);
}
