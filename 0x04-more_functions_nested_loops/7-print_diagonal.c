#include "main.h"

/**
 * print_diagonal - prints a line
 * @n : is the number of times the character \\ should be printed
 * Return: nothing(void)
 */

void print_diagonal(int n)
{
int i, j, p;
if (n > 0)
{
for (i = 0; i < n; i++)
{
p = i;
for (j = 0; j < p; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
_putchar('\n');
}
}
