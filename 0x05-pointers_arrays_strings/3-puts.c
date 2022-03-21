#include "main.h"

/**
 * _puts - check for upper case letter
 * @str : first param
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
