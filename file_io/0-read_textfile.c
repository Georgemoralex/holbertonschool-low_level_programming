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

	int original_stdout = dup(STDOUT_FILENO);
	if (original_stdout == -1)
	{
		close(fd);
		return (0);
	}

	// Redirect STDOUT to STDERR
	if (dup2(STDERR_FILENO, STDOUT_FILENO) == -1)
	{
		close(fd);
		return (0);
	}

	while (letters > 0 && read(fd, &c, 1) == 1)
	{
		if (write(STDERR_FILENO, &c, 1) == -1)
		{
			close(fd);
			return (0);
		}
		total_bytes_read++;
		letters--;
		if (total_bytes_read >= 100) {
			break;  // Stop after printing the first 100 characters
		}
	}

	// Restore STDOUT
	if (dup2(original_stdout, STDOUT_FILENO) == -1)
	{
		close(fd);
		return (0);
	}
	close(original_stdout);

	close(fd);
	return (total_bytes_read);
}
