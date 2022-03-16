#include "main.h"

/**
 * _islower - check the code.
 *
 * Return: either 0 or 1.
 */
int _islower(int c)
{
int i;

for (i = 'a'; i <= 'z'; i++)
{
if (c == i)
{
return (1);
}
}
return (0);
}
