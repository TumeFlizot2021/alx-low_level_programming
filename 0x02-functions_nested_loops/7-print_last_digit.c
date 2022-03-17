#include "main.h"
/**
 * print_last_digit- check the code.
 *@n: letter is being tested
 * Return: Emodullo of a.
 */

int print_last_digit(int a)
{
<<<<<<< HEAD
int b;
if (a > 0)
{
b = a % 10;
}
else
{
b = -(a);
b = b % 10;	
=======
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
>>>>>>> 29ac4ba0fe7d0ea4f8296601580e3a251017a18f
}
_putchar('0' + b);
return (b);
}
