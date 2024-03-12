#include "main.h"

/**
 * append_text_to_file - function that appends text at the end
 * @filename: name of the file
 * @text_content: NULL terminated string
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_x;
	ssize_t y = 0, z = 0;
	char *p;

	if (filename == NULL)
		return (-1);

	file_x = open(filename, O_WRONLY | O_APPEND);
	if (file_x == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (z = 0, p = text_content; *p; p++)
			z++;
		y = write(file_x, text_content, z);
	}
	if (close(file) == -1 || z != y)
		return (-1);
	return (1);
}
