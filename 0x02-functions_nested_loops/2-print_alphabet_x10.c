#include "main.h"

/**
 * prints the alphabet - prints 10 times the alphabet, in lowercae
 * 
 * return: void
 */

void print_alphabet_x10(void)
{
	char i;
	int s=0;

	while (s <= 9)
	{
		for (i = 'a' ; i <= 'z' ; i++)
		{
			_putchar(i);
		}
		_putchar('\n');

		i++;
	}
}
