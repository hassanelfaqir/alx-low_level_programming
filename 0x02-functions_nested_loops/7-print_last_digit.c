#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @n : tayke the last digit of input fonction
 *
 * Return: last digit (Success)
 */

int print_last_digit(int n)
{
	int lastdegit;

	if (n < 0)
		lastdegit = (-1) * (n % 10);
	else
		lastdegit = (n % 10);
	_putchat(lastdegit + '0');
	return (lastdegit);
}
