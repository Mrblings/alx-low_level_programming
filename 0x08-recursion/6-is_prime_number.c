#include "main.h"
int actual_prime(int n, int i);
/**
* is_prime_number - determines a prime number
* @n: interger to be worked on
* Return: retuns an int
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
* actual_prime - retruns the actual prime number
* @n: actual integer to be eveualted
* @i: itereation
* Return: returns an int
*/
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i < 0)
		return (0);
	return (actual_prime(n, i - 1));
}
