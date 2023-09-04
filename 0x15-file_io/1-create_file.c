#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fede, wr, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	fede = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(fede, text_content, i);

	if (fede == -1 || wr == -1)
		return (-1);

	close(fede);

	return (1);
}
