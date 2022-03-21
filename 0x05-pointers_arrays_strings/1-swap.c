#include "main.h"

/**
 * swap_int - check the code.
 *@a : the address to fist int.
 *@b : the address to second int.
 * Return: Always return nothing.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
