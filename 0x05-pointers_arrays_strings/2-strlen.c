#include "main.h"

/**
 * _strlen - check the code.
 *@s : string whoes length is to be found.
 * Return: Always return length of the string s.
 */

int _strlen(char *s)
{
	int i = 0;
	int len = 0;

	while (*(s + i) != '\0')
	{
		len = len + 1;
		i   = i + 1;
	}

	return (len);
}
