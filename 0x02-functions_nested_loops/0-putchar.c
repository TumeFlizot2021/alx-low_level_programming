#include <stdio.h>
#include <string.h>
#include "main.h"


int main(void)
{
char str[] = "_putchar";
long unsigned int i;
for (i = 0; i < strlen(str); i++)
{
_putchar (str[i]);
}

_putchar('\n');
return (0);
}
