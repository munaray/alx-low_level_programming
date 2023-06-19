#include "main.h"

/**
 * *_memcpy - Thsi copies memory area
 * @dest: The destination memory area
 * @src: The source memory area to copy from
 * @n: The number of bytes to copy
 * Return: pointer to DMA
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
