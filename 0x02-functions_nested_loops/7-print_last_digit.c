#include "main.h"
/**
 * print_last_digit- check the code.
 *@n: letter is being tested
 * Return: Emodullo of a.
 */

int print_last_digit(int n)
{
n = n % 10;
if (n > 0)
{
_putchar('0' + n);
return (n);
_putchar('0' + n);
}
else 
{
n = -n;
_putchar('0' + n);
}
return (n);
}
