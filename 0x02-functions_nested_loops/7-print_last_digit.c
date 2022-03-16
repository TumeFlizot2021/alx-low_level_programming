#include "main.h"
/**
 * print_last_digit- check the code.
 *@a: letter is being tested
 * Return: Emodullo of a.
 */

int print_last_digit(int a)
{
int b;
if (a > 0)
{
b = a % 10;
}
else
{
b = -(a) % 10;	
}
_putchar('0' + b);
return (b);
}
