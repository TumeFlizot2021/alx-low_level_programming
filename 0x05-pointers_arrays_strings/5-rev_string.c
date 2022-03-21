#include "main.h"
/**
 * rev_string - rev string
 * @s: string to be reversed
 * Return : Always return nothing
 */

void rev_string(char *s)
{
	char *t = s;
	char n[900];
	short c = 0;

	while (*s != '\0')
	{
		n[c] = *s;
		s++;
		c++;
	}
	c = 0;

	while (s > t)
	{
		s--;
		*s = n[c];
		c++;
	}
}
