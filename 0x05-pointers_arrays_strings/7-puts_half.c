#include "main.h"
/**
 * puts_half - check string
 * @str: string to be plitted
 * Return : Always return nothing
 */

void puts_half(char *str)
{
	int i = 0;
	int len = 0;

	while (str[i] != '\0')
	{
		i = i + 1;
		len = len + 1;
	}

	if (len % 2 == 0)
	{
		len = len / 2;
	}
	else
	{
		len = (len - 1) / 2;
	}

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len = len + 1;
	}

	_putchar('\n');
}
