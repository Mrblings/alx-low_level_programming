#include "main.h"
/**
* _strlen - gives the length of string
* @s: number of strings
* Return: returns the coubnt value
*/

int _strlen(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}
