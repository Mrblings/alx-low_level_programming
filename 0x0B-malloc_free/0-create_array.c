#include "main.h"
/**
* create_array - creates array of nchars
* @size: gives the size of char
* @c: char to be inputed
* Return: returns the pointer
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
