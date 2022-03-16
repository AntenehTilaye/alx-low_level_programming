#include "main.h"
/**
 * print_sign - check nums
 * @n : num
 * Return: returns 0 or 1
 */
int print_sign(int n)
{
	int ch;

	if (n > 0)
	{
		ch = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		ch = 0;
		_putchar('0');
	}
	else
	{
		ch = -1;
		_putchar('-');
	}
	return (ch);
}
