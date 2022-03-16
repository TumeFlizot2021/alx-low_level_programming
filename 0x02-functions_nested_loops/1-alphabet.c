#include <unistd.h>
#include "main.h"
/**
 * print_aphabet - prints alphabets from a to z.
 *
 * Return: nothing.
 */
void print_alphabet(void)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c = c + 1;
}
_putchar('\n');
}

