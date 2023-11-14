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
    int len;
    int len2;


    len = _printf("Let's try to printf a simple %s.\n" );
    len2 = printf("Let's try to printf a simple %s.\n");

    printf("len: %d\n", len);
    printf("len2: %d\n", len2);

    return (0);
}
