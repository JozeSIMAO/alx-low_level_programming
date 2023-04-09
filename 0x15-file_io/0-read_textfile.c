#include "main.h"
/**
 * read_textfile - reads a text file ands prints it to the POSIX STNDOUT
 * @filename: is pointer to a file
 * @letters: if the number of letters to be read and printed
 * Return: num of letter
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *output;
	char *chr;
	ssize_t read, written;

	if (filename == NULL)
		return (0);
	output = fopen(filename, "r");

	if (output == NULL)
		return (0);

	chr = malloc(letters + 1);
	if (chr == NULL)
	{
		fclose(output);
		return (0);
	}
	read = fread(chr, sizeof(char), letters, output);
	if (read <= 0)
	{
		fclose(output);
		free(chr);
		return (0);
	}
	written = write(STDOUT_FILENO, chr, read);
	if (written < read)
	{
		fclose(output);
		free(chr);
		return (0);
	}
	else
	{
		fclose(output);
		free(chr);
		return (written);
	}
}
