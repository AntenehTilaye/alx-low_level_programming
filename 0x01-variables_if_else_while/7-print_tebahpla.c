#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main- starting point
 * Return: returns 0 for os
 * Description: this program checks if the number is positive or not
 **/

int main(void)
{
	int i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
