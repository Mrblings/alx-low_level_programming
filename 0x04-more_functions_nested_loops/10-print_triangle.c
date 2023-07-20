#include "main.h"
/**
* print_triangle - prints a shape
* @size: forms the shape
* Return: returns void
*/

void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i, j, m;

		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j >= 1; j--)
			{
				_putchar(' ');
			}
			for (m = 1; m <= i; m++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}

	}
}

