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

		for (j = len; str[j] != '\0'; j++)
                        _putchar(str[j]);
	}
	else
	{
		len = (len - 1) / 2;
		
		for (j = len; j < len - 1; j++)
			_putchar(str[j]);	
	}

	

	_putchar('\n');
}
