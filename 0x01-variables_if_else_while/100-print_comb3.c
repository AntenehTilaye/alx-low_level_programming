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
	int i = '0', j;

	while (i < '9')
	{
		j = i + 1;

		while (j <= '9')
		{
			putchar(i);
			putchar(j);

			if (i < '8')
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
