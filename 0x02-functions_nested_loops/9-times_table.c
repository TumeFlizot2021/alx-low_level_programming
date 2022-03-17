#include "main.h"
/**
 * times_table- check the code.
 *@n: letter is being tested
 * Return: Emodullo of a.
 */

void times_table(void)
{
int i, j;
int temp;
for (i = 0; i < 10; i++)
{
_putchar('0');
_putchar(',');
_putchar(' ');
temp = i;
for (j = 1; j < 10; j++)
{
if(temp <= 9)
{
_putchar(' ');
_putchar(' ');
_putchar('0' + temp);
}
else
{
_putchar(' ');
_putchar(temp / 10 + '0');
_putchar(temp % 10 + '0');
}
if(j < 9)
{
_putchar(',');
_putchar(' ');
}
temp = temp + i;
}
_putchar('\n');
}
}
