#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @n: number of time to copy b
 * @s: memory area to be filled
 * @b: char to copy
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int l = 0;

	for (; l < n; l++)
	{
		s[l] = b;
	}
	return (s);
}
