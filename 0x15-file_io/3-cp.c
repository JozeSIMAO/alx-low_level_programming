#include "main.h"
/**
 * main - copies content from one file to another
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 or exit code
 */
int main(int argc, char *argv[])
{
	int from, to, file_read, file_written;
	char buffer[BUFFER];
	mode_t file_mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	from = open(argv[1], O_RDONLY);
	if (from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	to = open(argv[2], O_WRONLY | O_TRUNC | O_CRET, file_mode);
	if (to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	while ((file_read = read(from, buffer, BUFFER)) > 0)
	{
		file_written = write(to, buffer, file_read);
		if (written != file_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (file_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1];
				exit(98);
	}
	if (close(from) == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close file %d\n", from);
	exit(100);
	}
	if (close(to) == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
	exit(100);
	} return (0);
}
