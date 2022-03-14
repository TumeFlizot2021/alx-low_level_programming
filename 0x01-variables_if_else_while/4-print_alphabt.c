#include <stdio.h>
/**
 * main - main block
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */
int main(void)
{
	char t = 'a';

	while (t <= 'z')
	{
		if (t != 'e' && t != 'q')
		{
			putchar(t);
		}
		t++;
	}

	putchar('\n');
	return (0);
}
