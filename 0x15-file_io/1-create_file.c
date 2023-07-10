#include "main.h"

/**
 * _strlen - returns length of a string
 * @str: is string
 * Return: length
 */

int _strlen(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}
/**
 * create_file - creates a file
 * @filename: pointer to file
 * @text_content: content
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t written;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 00400 | 00200);

	if (text_content != NULL)
	{
		written = write(file, text_content, _strlen(text_content));
		if (written == -1)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}
