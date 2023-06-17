#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * descreption: all single digit numbers of base 10 starting from 0.
 *
 * return: Always 0 (Success)
 */

int main(void)
{
	int in = 0;

	while (in < 10)
	{
		/*convert in to ASCII represention code */
		putchar(in + '0');
		in++;
	}
	putchar('\n');

	return 0;
}
