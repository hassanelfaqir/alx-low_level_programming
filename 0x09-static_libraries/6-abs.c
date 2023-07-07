#include "main.h"

/**
 * _abs - Write a function that computes the absolute value of an integer
 *
 * @c : taykes in intger taype input for function
 *
 * Return: Always 0 (Success)
 */

int _abs(int c)
{
	if (c < 0)
		c = (-1) * c;
	return (c);
}
