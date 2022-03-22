#include "main.h"

/**
 * *_strcpy - copy strg to another string
 * @dest: pointer
 * @src: poiter
 * Return: numbers dest
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
