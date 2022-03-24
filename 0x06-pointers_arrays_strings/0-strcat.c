#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: pointer destination
 * @src: pointer source
 * Return: void
*/

char *_strcat(char *dest, char *src)
{
int i = -1, len;
for (len = 0; dest[len] != '\0'; len++)
;

do {
	i++;
	dest[len] = src[i];
	len++;
} while (src[i] != '\0');

return (dest);
}
