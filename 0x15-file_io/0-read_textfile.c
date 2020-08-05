#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 *
 * Return: the number of letters printed, or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	int s_lecture, s_pasted;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	s_lecture = read(fd, buffer, letters);
	if (s_lecture == -1)
		return (0);

	buffer[s_lecture] = '\0';

	s_pasted = write(STDOUT_FILENO, buffer, s_lecture);
	if (s_pasted == -1)
		return (0);

	close(fd);
	free(buffer);
	return (s_pasted);
}
