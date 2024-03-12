#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: file to create
 * @text_content: terminated string
 * Return: 1 on success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_x;
	int y = 0, z = 0;
	char *p;

	if (filename == NULL)
		return (-1);

	file_x = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_x == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (z = 0, p = text_content; *p; p++)
			z++;
		y = write(file_x, text_content, z);
	}
	if (close(file_x) == -1 || z != y)
		return (-1);
	return (1);
}
