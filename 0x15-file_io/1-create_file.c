#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: string to write to the file
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 00600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	if (write(fd, text_content, strlen(text_content)) == -1)
		return (-1);
	return (1);

}
