#include "main.h"

/**
 * _islower :Write a function that checks for lowercase character.
 *
 *
 * function that checks for lowercase character
 * 
 * return :Returns 1 if c is lowercase
 *         Returns 0 otherwi 
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
