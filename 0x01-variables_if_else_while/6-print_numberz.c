#include <stdio.h>
/**
 * main - Entry point
 *
 * descreption - all single digit numbers of base 10 starting from 0
 *
 * Return : Always 0 (Success)
 */

int main(void)
{
	int in = 0;

	while (in < 10)
	{
		putchar(in + '0');
		in++;
	}
	putchar('\n');

	return (0);
}
