#include "main.h"

/**
 * _strlen - check for upper case letter
 * @str : first param
 * Return: returns int
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
