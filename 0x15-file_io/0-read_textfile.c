#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output
 * @filename: file to read
 * @letters: letters to read
 *
 * Return: number of letters it could print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t letters_read;
	ssize_t bytes_written;
	ssize_t total_letters = 0;
	ssize_t letters_to_print;
	char buffer[1024];

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);
	while (letters > 0)
	{
		letters_read = read(file, buffer, sizeof(buffer));

		if (letters_read == -1)
		{
			close(file);
			return (0);
		}
		if (letters_read == 0)
			break;
		letters_to_print = (letters < (size_t)letters_read)
			? letters : (size_t)letters_read;
		bytes_written = write(STDOUT_FILENO, buffer, letters_to_print);
		if (bytes_written == -1 || bytes_written != letters_to_print)
		{
			close(file);
			return (0);
		}
		total_letters += letters_to_print;
		letters -= letters_to_print;
	}
	return (total_letters);
}
