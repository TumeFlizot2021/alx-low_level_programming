#include "main.h"
/**
 * puts2 - check string
 * @str: string to be reversed
 * Return : Always return nothing
 */

void puts2(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
		i = i + 1;

	while (j < i)
	{
		_putchar(str[j]);
		j = j + 2;
	}

	_putchar('\n');
}
