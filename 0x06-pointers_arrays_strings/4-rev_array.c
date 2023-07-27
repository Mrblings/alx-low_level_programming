#include "main.h"
/**
* reverse_array - holds array of intergers
* @a: stores arrays
* @n: number of arrays
* Return: returns void
*/

void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}

}
