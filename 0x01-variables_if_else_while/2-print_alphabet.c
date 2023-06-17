#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: prints the alphabet in lowercase
 *
 * Return: 0 (Success)
 */

int main(void)
{	char ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	puchar('\n');

	return (0);
}
