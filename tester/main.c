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

    int chars_printed1 = _printf("Character: %c\nString: %s\nPercentage sign: %%\n" "hello1: %c\n" "hello1: %s\n" "hello1: %%%\n", c, str);
    int chars_printed2 = printf("Character: %c\nString: %s\nPercentage sign: %%\n" "hello1: %c\n" "hello1: %s\n" "hello1: %%%\n", c, str);


    printf("Total characters printed: %d\n", chars_printed1);
    printf("Total characters printed: %d\n", chars_printed2);


    return 0;
}
