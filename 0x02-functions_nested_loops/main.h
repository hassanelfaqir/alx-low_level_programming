#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
/**
* add - adds two integers and returns the result
* @a: int to be added to b
* @b: int to be added to a
* Return: sum of a and b
*/
int add(int a, int b)
{
	int c;

	c = a + b;
	return (c);
}
#endif 
