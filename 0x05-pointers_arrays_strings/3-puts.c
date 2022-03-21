#include "main.h"

/**
 * _puts - check for upper case letter
 * @str : first param
 * Return: returns int
 */

int _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
