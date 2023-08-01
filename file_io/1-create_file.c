#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <string.h>

/**
 *	create_file - Creates a new file
 *	@filename: Name of the file.
 *	@text_content: Text that it would be inside the new file.
 *	Return: 1 on success, -1 otherwise.
 */

int create_file(const char *filename, char *text_content)
{
	int fl, wr;

	fl = open(filename, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR);

	if (fl == -1 || filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	wr = write(fl, text_content, strlen(text_content));

	if (wr == -1)
		return (-1);

	close(fl);

	return (1);

}
