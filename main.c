#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    char c = 'X';
    char *str = "Hello, World!";


    int vara1 = _printf("Character: %c\nString: %s\nPercentage sign: %%\n hello: \n hello %s\n hello %c\n hello %%%c\n", c, str);
    int var2 = printf("Character: %c\nString: %s\nPercentage sign: %%\n hello: \n hello %s\n hello %c\n hello %%%c\n", c, str);

    _printf("c = %d", vara1);
    printf("c = %d", var2);

    return (0);
}
