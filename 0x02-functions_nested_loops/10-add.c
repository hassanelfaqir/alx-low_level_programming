#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int add(int a, int b);

int main(void)
{
    int n;

    n = add(89, 9);
    printf("%d\n", n);
    return (0);
}
int add(int a, int b)
{
        int c;

        c = a + b;
        return (c);
}
