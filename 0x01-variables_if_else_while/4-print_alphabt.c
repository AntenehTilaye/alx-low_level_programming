#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main- starting point
 * Return: returns 0 for os
 * Description: this program prints some text based on if for and while loops
 **/

int main(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		if (i != 'e' && i != 'q')
			putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
