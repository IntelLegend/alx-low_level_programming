#include "main.h"
/**
 * read_textfile - reads an amount from textfile, prints to POSIX stdout
 * @filename: string filename
 * @letters: number of characters to read and print
 * Return: number of letters it could print, or 0 if failed or empty
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	int read_status;
	int write_status;

	if (!filename || letters > SSIZE_MAX || letters == 0)
		return (0);

	buf = malloc(letters + 1);
	if (!buf)
		return (0);
	buf[letters] = '\0';
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	read_status = read(fd, buf, letters);
	if (read_status < 0)
	{
		free(buf);
		return (0);
	}
	close(fd);

	write_status = write(STDOUT_FILENO, buf, read_status);
	if (write_status < 0 || write_status != read_status)
	{
		free(buf);
		return (0);
	}
