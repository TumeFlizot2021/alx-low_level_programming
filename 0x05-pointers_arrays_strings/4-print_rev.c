#include "main.h"

/**
 * print_rev - check the code.
 *@s : string to be printed.
 * Return: Always return nothing.
 */

void print_rev(char *s)
{
	int i = 0;
	int len = 0;

	while (*(s + i) != '\0')
	{
		len = len + 1;
		i = i + 1;
	}

	while (*(s + len) > -1)
	{
		_putchar(*(s + len));
		len = len - 1;
	}

	_putchar('\n');
}
