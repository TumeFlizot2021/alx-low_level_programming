#include "main.h"

/**
 * print_alphabet_x10 - check the code.
 *
 * Return: Always nothing.
 */
int _islower(int c)
{
int i;

for (i = 'a'; i <='z'; i++)
{
if (c == i)
{
return (1);
}
}
return (0);
}
