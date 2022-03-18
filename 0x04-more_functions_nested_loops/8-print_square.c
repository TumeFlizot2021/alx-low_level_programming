#include "main.h"

/**
 * print_square - prints a sqaure
 * @size : side of the square
 * Return: nothing(void)
 */

void print_square(int size)
{
	int i;
	int j;

	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size; i++)
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
