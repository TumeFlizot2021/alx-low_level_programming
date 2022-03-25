#include "main.h"

/**
 * _strncat - check the code.
 *@dest : the address destination string.
 *@src : the address tof the source string.
 * @n : number of bytes to be copied from src
 * Return: Always return destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr1;
	char *ptr2;

	int i = 0;

	while (dest[i] != '\0')
		i++;

	ptr1 = dest + i;
	ptr2 = src + n;

	while (src < ptr2)
		*ptr1++ = *src++;
	*ptr1 = '\0';

	return (dest);	
}
