#include <stdio.>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the numbers from 0 to 9.
 *
 * Return: 0 indicating successful execution
 */

int main(void)
{
	int in = 0;

	while (in < 10)
	{
		/*convert in to ASCII represention code */
		putchar(in + '0');
		in++;
	}
	putchar('\n');

	return (0);
}
