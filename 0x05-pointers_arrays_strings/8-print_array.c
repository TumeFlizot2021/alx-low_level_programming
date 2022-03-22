#include "main.h"
#include <stdio.h>
/**
 * print_array - check string
 * @a: array of integers
 * @n : number of int
 * Return : Always return nothing
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == n - 1)
		{
			printf("%d \n", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}

		i = i + 1;
	}
}
