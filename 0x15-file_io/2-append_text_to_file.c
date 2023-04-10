#include "main.h"
/**
 * _strlen - gets length of a string
 * @str: is pointer to string
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
 * append_text_to_file - appends text at end of file
 * @filename: pointer to file
 * @text_content: text
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, written, len;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		len = _strlen(text_content);
	}

	file = open(filename, O_WRONLY | O_APPEND);
	written = write(file, text_content, len);

	if (file == -1 || written == -1)
	{
		return (-1);
	}

	close(file);

	return (1);
}
