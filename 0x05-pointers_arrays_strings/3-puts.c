#include "main.h"

/**
 * _puts - check the code.
 *@str : string to be printed.
 * Return: Always return nothing.
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i = i + 1;
	}

	_putchar('\n');
}
