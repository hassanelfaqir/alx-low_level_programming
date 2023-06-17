#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: combinations of single-digit numbers.
 *
 * Return: 0 indicating successful execution
 */

int main(void)
{
	int in = 0;

	while (in < 10)
	{
		putchar(in + '0');

		if (in != 9)
		{
			putchar(',');
			putchar(' ');
		}

		in++;
	}
	putchar('\n');

	return (0);
}
