#include "main.h"
int actual_sqrt_recursion(int n, int i);
/**
* _sqrt_recursion - name of the recursive function
* @n: argument
* Return: always 0
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
* actual_sqrt_recursion - name of the new function
* @n: number to find the square root of
* @i: itereator
* Return: returns an int
*/
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
