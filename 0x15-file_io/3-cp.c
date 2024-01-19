#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * error - Display an error message and exit the program.
 * @msg: Error message prefix
 * @file: File name or description
 * @exit_code: Exit code for the program
 */
void error(char *msg, char *file, int exit_code)
{
	dprintf(STDERR_FILENO, "%s %s\n", msg, file);
	exit(exit_code);
}

/**
 * main - Program entry point
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, otherwise exit with an error code
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes;

	if (argc != 3)
		error("Usage: cp file_from file_to", "", 97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from < 0)
		error("Error: Can't read from file", argv[1], 98);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd_to < 0)
	{
		close(fd_from);
		error("Error: Can't write to", argv[2], 99);
	}

	while ((bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(fd_to, buffer, bytes) != bytes)
		{
			close(fd_from);
			close(fd_to);
			error("Error: Can't write to", argv[2], 99);
		}
	}

	if (bytes < 0)
		error("Error: Can't read from file", argv[1], 98);

	if (close(fd_from) < 0)
		error("Error: Can't close fd", argv[1], 100);

	if (close(fd_to) < 0)
		error("Error: Can't close fd", argv[2], 100);
	return (0);
}
