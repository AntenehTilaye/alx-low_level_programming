#include "main.h"

/**
 * swap_int - check for upper case letter
 * @n : first param
 * @m : second param
 */

void swap_int(int *n, int *m)
{
	int temp = *n;
	*n = *m;
	*m = temp;
}
