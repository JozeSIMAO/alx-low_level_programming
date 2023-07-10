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
	ssize_t file;
	ssize_t letters_read;
	ssize_t bytes_written;
	char *buffer;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);
	
	buffer = malloc(sizeof(char) * letters);
	letters_read = read(file, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, letters_read);

	free(buffer);
	close(file);

	return (bytes_written);
}
