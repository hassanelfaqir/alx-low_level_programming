#include "main.h"

/**
 * main - Entry point of the program
 *
 * Write a function that checks for lowercase character.
 * 
 * return :Returns 1 if c is lowercase Returns 0 otherwise
 *
 **/

int _islower(int c)

{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
