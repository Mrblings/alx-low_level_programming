#include "main.h"
/**
* print_line - used to print lines
* @n: use to count the number of tuimes
* Return: use to return values
*/

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 1; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
