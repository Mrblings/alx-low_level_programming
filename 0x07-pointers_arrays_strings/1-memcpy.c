#include "main.h"
/**
* _memcpy - a functions that copies strings
* @dest: destination string
* @src: source string
* @n: number of times a string is to be replicated
* Return: returns a character value
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
