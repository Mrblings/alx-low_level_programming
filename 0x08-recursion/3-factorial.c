#include "main.h"
#include <stdio.h>
/**
* factorial - namer of recursive function
* @n: integer value
* Return: returns an int
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

