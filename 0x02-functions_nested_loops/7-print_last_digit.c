#include "main.h"
/**
 * print_last_digit- check the code.
 *@a: letter is being tested
 * Return: Emodullo of a.
 */

int print_last_digit(int a)
{
 a = a >= 0 ? a : a * -1
 int b = a * 10;
_putchar('0' + b);
return (b);
}
