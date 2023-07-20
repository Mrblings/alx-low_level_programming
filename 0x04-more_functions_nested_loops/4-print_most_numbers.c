#include "main.h"
/**
* print_most_numbers - outputs numb except 2 and 4
*
* Return: returns values
*/

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (!(c == '2' || c == '4'))
			_putchar(c);
	}
	_putchar('\n');
}
