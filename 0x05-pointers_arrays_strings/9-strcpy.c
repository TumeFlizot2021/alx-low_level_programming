#include "main.h"
/**
 * _strcpy - check string
 * @dest: string to be copied to
 * @src : string to be copied from
 * Return : Always return dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i = i + 1;
	}
	dest[i] = '\0';

	return (dest);
}
