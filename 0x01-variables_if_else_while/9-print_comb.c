#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main- starting point
 * Return: returns 0 for os
 * Description: this program checks if the number is positive or not
 */

int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		if (i < '9')
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	return (0);
}
