#include "main.h"
/**
 * times_table- check the code.
 * Return: the multiples of 0 - 9.
 */
void times_table(void)
{
int i, j;
int temp;
for (i = 0; i < 10; i++)
{
_putchar('0');
_putchar(','); 
temp = i;
for (j = 1; j < 10; j++)
{
if (temp <= 9)
{
_putchar(' ');
_putchar('0' + temp);
}
else
{
_putchar(temp / 10 + '0');
_putchar(temp % 10 + '0');
}
if (j < 9)
{
_putchar(',');
_putchar(' ');
}
temp = temp + i;
}
_putchar('\n');
}
}

