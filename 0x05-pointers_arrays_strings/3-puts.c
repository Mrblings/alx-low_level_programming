#include "main.h"
/**
* _puts - prints strings
* @str: collects strings
* Return: returns void
*/

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
