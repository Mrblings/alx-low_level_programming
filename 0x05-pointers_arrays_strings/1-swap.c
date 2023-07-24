#include "main.h"
/**
* swap_int - swaps the value of integres
* @a: first integre
* @b: second integre
* Return: returns void
*/

void swap_int(int *a, int *b)

{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
