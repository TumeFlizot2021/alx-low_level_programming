#include "main.h"
/**
 * puts2 - check string
 * @str: string to be reversed
 * Return : Always return nothing
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] % 2 == 0)
			_putchar(str[i]);

		i = i + 1;
	}

	_putchar('\n');
}
