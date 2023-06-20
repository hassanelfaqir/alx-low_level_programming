#include "main.h"

/**
 * print_sign - Write a function that prints the sign of a number
 *
 * @c : check input of function
 * Return:1 and prints + if n is greater than zero
 * Returns 0 and prints 0 if n is zero
 * Returns -1 and prints - if n is less than zero(Success)
 */

int print_sign(int c)

{
	if (c > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (c == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (c < 0)
	{
		_putchar(45);
		return (-1);
	}
}
