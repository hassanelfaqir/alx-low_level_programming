#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: alphabet in lowercase, and then in uppercase
 *
 * Return: 0 (Success)
 */

int main(void)
{	char ch = 'a';
	char CH = 'A';
	/*prints a-z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*prints A-Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
