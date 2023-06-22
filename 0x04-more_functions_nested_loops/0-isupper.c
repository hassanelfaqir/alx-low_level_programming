#include "main.h"

/**
 * _isupper - check the code.
 *
 * @c : check autput of function
 *
 * Return: return 0 or return 1.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
