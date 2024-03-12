#include "main.h"
#define SIZE 1024

/**
 * _cpfile - program that copies the content of a file
 * @a: int a
 * @str: string of file_to and file_from
 * @b: int b
 * Return: 0
*/

int _cpfile(int a, char *str, int b)
{
	switch (a)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(error);
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
			exit(error);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
			exit(error);
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", b;
			exit(error);
		default:
			return (0);
	}
}

/**
 * main - copying a file
 * @argc: argc
 * @argv: argv
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int file_to, file_from;
	int rs, ws;
	int ci, co;
	char buffer[SIZE];

	if (argc != 3)
		_cpfile(97, NULL, 0);

	file_to = open(argv[1], O_RDONLY);
	if (file_in == -1)
		_cpfile(98, argv[1], 0);

	file_from = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_from == -1)
		_cpfile(99, argv[2], 0);

	while ((rs = read(file_to, buffer, SIZE)) != 0)
	{
		if (rs == -1)
			_cpfile(98, argv[1], 0);
		
		ws = write(file_from, buffer, rs);
		if (ws == -1)
			_cpfile(99, argv[2], 0);
	}

	ci = close(file_to);
	if (ci == -1)
		_cpfile(100, NULL, file_to);

	co = close(file_from);
	if (co == -1)
		_cpfile(100, NULL, file_from);

	return (0);
}
