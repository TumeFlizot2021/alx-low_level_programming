#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */
int main(void)
{
	char c = 'a';
        char t = 'A';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (t <= 'Z')
        {
                putchar(t);
                t++;
        }

	putchar('\n');
	return (0);
}
