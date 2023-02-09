#include "main.h"
#include <string.h>

/**
 * _memcpy - copy byte from an area to move it
 * @dest: destination from where the byte gonna be moved
 * @src: from where the byte is copied
 * @n: unsigned byte
 * Return: memcpy
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
