#include "main.h"

/**
 * read_textfile - function that reads a text file and prints
 * @filename: filename 
 * @letters: letters
 * Return: filename is NULL 0 or actual letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_x;
	int y, z;
	char *buffer;

	if (filename == NULL || letters == 0)
		return (0);
	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
		return (0);

	file_x = open(filename, O_RDONLY);
	if (file_x == -1)
	{
		free(buffer);
		return (0);
	}
	y = read(file_x, buffer, letters);
	if (y == -1)
	{
		free(buffer);
		close(file_x);
		return (0);
	}
	z = write(STDOUT_FILENO, buffer, y);

	free(buffer);
	close(file_x);
	if (z != y)
		return (0);
	return (y);
}
