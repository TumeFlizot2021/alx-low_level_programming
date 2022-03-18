#include "main.h"

/**
 * print_triangle - check the code
 *@size: determines the height of the triangle to be printed
 * Return: Always 0.
 */

void print_triangle(int size)
{
int i, j, p;
for (i = 0; i < size; i++)
{
for (j = size -1 - i; j > 0; j--)
{
_putchar(' ');
}
for (p = 0; p <= i; p++)
{
_putchar('#');
}
_putchar('\n');
}
if (size <= 0)
{
_putchar('\n');
}
}
