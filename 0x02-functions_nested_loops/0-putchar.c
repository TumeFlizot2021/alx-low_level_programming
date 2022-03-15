#include <stdio.h>
#include <string.h>


int main()
{
        char str[] = "_putchar";
        long unsigned int i;

        for(i = 0; i < strlen(str); i++){

                putchar(str[i]);
        }
        putchar('\n');

        return 0;
}
