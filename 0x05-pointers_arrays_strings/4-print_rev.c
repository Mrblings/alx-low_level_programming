#include "main.h"
/**
* print_rev - prints the reverse of strings
* @s: takes in string value
* Return: returms void
*/

void print_rev(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	for (i = count - 1; s[i] >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
