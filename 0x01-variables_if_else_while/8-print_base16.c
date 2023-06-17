#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the numbers from 0 to 9.
 *
 * Return: 0 indicating successful execution
 */

int main(void)
{
	int in = 48;

	while (in <= 102)
	{
		putchar(in);
		if (in == 57)
			in += 39;
		in++;
	}
	putchar('\n);

	return (0);
}
