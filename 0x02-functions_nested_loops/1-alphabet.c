#include "main.h"

/**
 * main - check the code
 *
 * descriptin: function that prints the alphabet
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;

		if (ch > 'z')
			_putchar('\n');
	}
}
