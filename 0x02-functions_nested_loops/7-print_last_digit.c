#include "main.h"
/**
 * print_last_digit -prints last digit
 * @n : num
 * Return: returns 0 or 1
 */
int print_last_digit(int n)
{
	int ld;

	if (n < 0)
		ld = -1 * (n % 10);
	else
		ld = n % 10;
	_putchar(ld + '0');
	return (ld);
}
