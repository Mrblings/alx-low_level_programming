#include "main.h"
/**
* _pow_recursion - name of the recursive function
* @x: first int value
* @y: seconmd int value
* Return: returns an int value ususally 0
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
