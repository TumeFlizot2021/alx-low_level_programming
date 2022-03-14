#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */
int main(void)
{
	int n;
	int last_n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_n = n % 10;

	if (last_n > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, last_n);
	else if (last_n == 0)
		printf("Last digit of %i is %i and is 0\n", n, last_n);
	else if (last_n < 6)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last_n);

	return (0);
}
