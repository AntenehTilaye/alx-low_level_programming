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
	int i = '0';
	int j = 'a';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	while (j < 'g')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
