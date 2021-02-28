#include "holberton.h"

/**
 * is_prime_number - find prime number
 * @n: number
 *
 * Return: 1 if n is prime number. 0 otherwise
 */

int is_prime_number(int n)
{
	return(check_prime(n, prime + 1));
}

int check_prime(int n, int prime)
{

	if (n % 2 == 0)
		return (1);

	else
		return (0);

}
