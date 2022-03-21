#include "main.h"

/**
 * print_rev - check the code.
 *@s : string to be printed.
 * Return: Always return nothing.
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
		_putchar(s[i]);

	_putchar('\n');
}
