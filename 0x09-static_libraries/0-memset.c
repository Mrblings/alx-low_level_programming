#include "main.h"
/**
* _memset - name of sunction
* @s: pointer to s variable
* @b: holds the character of b
* @n: holds the number of times an integer will be printed
* Return: returns the varaible
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
