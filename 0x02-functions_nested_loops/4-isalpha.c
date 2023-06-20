#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 *
 * @c : check input of function
 *
 * Return: Returns 1 if c is a letter, lowercase or uppercase
 * Returns 0 otherwise (Success)
 */

int _isalpha(int c)

{
	if (c >= 97 && c <= 122)
	{
	       	return (1);
	}
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
