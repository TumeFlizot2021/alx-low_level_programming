#include "main.h"

/**
 * _strcat - check the code.
 *@dest : the address destination string.
 *@src : the address tof the source string.
 * Return: Always return destination string.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	char *ptr;

	while (dest[i] != '\0')
		i++;

	 ptr = dest + i;

	while (*src != '\0')
		*ptr++ = *src++;

	*ptr = '\0';

	return (dest);
}
