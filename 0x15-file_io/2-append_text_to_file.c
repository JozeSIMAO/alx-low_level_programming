#include "main.h"
/**
 * _strlen - gets length of a string
 * @str: is pointer to string
 * Return: length
 */
size_t _strlen(const char *str)
{
	size_t i = 0;

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

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = _strlen(text_content);
		written = write(file, text_content, len);

		if (written != (ssize_t)len)
		{
			close(file);
			return (-1);
		}
	}

	close(file);

	return (1);
}
