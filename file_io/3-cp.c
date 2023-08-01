#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 *	main - The main Function that copy one file to another new one.
 *	@argc: Arguments counter.
 *	@argv: Vector of arguments.
 *	Return: The corresponding exit error or Success value (1).
 */


int main(int argc, char *argv[])
{
	int fd1, fd2, wr, rd;
	char buff[1024], *file_from, *file_to;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	fd1 = open(file_from, O_RDONLY);
	fd2 = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 00664);

	while ((rd = read(fd1, buff, sizeof(buff))) > 0)
	{
		wr = write(fd2, buff, rd);
		if (wr == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (rd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	};

	fd1 = close(fd1);
	fd2 = close(fd2);
	if (fd1 == -1 || fd2 == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", fd1 == -1 ? fd1 : fd2);
		exit(100);
	}
	return (0);
}
