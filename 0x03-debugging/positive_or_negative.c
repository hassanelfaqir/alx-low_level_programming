#include "main.h"

/**
 * positive_or_negative - gives the correct output
 *
 * @i : check yhe input of function
 *
 * return : void
 */

void positive_or_negative(int i)
{
	int i;

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
}
