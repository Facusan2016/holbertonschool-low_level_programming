#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/**
 *	read_textfile - Reads a text file and prints it to the stdout.
 *	@filename: Name of the file.
 *	@letters: Amount of letters to be printed.
 *	Return: The amount of letters that can print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fl, rd, wr;

	char *buff;

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
		return (-1);

	fl = open(filename, O_RDONLY);

	if (fl == -1 || filename == NULL)
	{
		free(buff);
		return (0);
	}

	rd = read(fl, buff, letters);

	if (rd == -1)
	{
		free(buff);
		return (0);
	}

	wr = write(STDOUT_FILENO, buff, rd);

	if (wr == -1)
	{
		free(buff);
		return (0);
	}

	close(fl);

	return (wr);
}
