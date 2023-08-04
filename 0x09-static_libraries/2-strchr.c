#include "main.h"
/**
* _strchr - stores string characters
* @s: holds the sting
* @c: char to be searched
* Return: returns char
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}
