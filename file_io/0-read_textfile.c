#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	char c;
	ssize_t total_bytes_read = 0;
	int fd;
	
	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	while (letters > 0 && read(fd, &c, 1) == 1)
	{
		c = write(STDERR_FILENO, &c, 1);
		if (c == -1)
		{
			close(fd);
			return (0);
		}
		total_bytes_read++;
		letters--;
	}
	close(fd);
	return (total_bytes_read);
}
