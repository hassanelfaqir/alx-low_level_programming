#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *d)
{
	int i;
	unsigned int dec_vale = 0;

	if (!d)
		return (0);

	for (i = 0; d[i]; i++)
	{
		if (d[i] < '0' || d[i] > '1')
			return (0);
		dec_vale = 2 * dec_vale + (d[i] - '0');
	}

	return (dec_vale);
}
