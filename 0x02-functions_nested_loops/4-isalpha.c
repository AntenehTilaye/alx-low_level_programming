#include "main.h"
/**
 * _isalpha - check lower caseletters
 * @c: char to check
 *
 * Return: 0 or 1 will be returned
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
