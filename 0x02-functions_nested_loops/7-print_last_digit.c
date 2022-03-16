#include "main.h"
/**
 * print_last_digit- check the code.
 *@a: letter is being tested
 * Return: Emodullo of a.
 */

int print_last_digit(int n)
{
n = n % 10;

if (n < 0)
{
n = -n;
putchar(n + '0');
}
return (n);
}
