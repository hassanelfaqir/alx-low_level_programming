#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int nb)
{
	int i, counte = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = nb >> i;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (counte)
			_putchar('0');
	}
	if (!counte)
		_putchar('0');
}
