#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the lowercase alphabet in reverse
 *
 * Return: 0 indicating successful execution
 */

int main(void)
{
	char ch = "z";

	while (ch >= "a")
	{
		putchar(ch);
		ch--;
	}

	putchar('\n');

	return (0);
}
