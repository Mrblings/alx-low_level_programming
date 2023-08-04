#include "main.h"
/**
* _strcpy - accpte intergers
* @dest: describes pointers
* @src: pointer two
* Return: returns void;
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != 0; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
