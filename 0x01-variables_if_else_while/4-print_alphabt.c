#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: prints the alphabet in lowercase ,exept q ,e
 *
 * Return: 0 (Sussec}
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
