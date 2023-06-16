#include "main.h"
/**
 * _memcpy - copies memory
 * @dest: to copy to
 * @src: to copy from
 * @n: number of bytes
 * Return: void
 */

void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *d = (unsigned char *)dest;
	const unsigned char *s = (const unsigned char *)src;
	size_t r = 0;

	for (; r < n; ++r)
	{
		d[r] = s[r];
	}

	return (dest);
}
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: is a pointer to previously allocated memory
 * @old_size: is the size in bytes
 * @new_size: is the new size in bytes
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int size;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		size = (old_size < new_size) ? old_size : new_size;
		_memcpy(new_ptr, ptr, size);
		free(ptr);
	}
	return (new_ptr);
}
