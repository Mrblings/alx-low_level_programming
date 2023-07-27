#include "main.h"
/**
* _strncat - catenation of strings
* @dest: destinatin
* @src: source string
* @n: interger value
* Return: returns a char
*/

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[len + i] = src[i];
		src++;
	}
	dest[len + i] = '\0';
	return (dest);
}
