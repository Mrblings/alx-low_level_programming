#include "main.h"
/**
* print_numbers - prints numbers 0 to 9
* @c: prints numbvers 0 to 9
* Return: returns void
*/

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
