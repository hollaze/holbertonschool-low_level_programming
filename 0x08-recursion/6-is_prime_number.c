#include "holberton.h"

/**
 * check_prime - check if n is prime
 * @n: number
 * @prime: check if n is prime
 * Return: check_prime
 */

int check_prime(int n, int prime)
{
	if (prime <= 1)
		return (0);

	/* ex: 17 -> 17 - 1 -> prime number */
	else if (prime == 2)
		return (1);

	else if (n % prime == 0)
		return (0);

	return (check_prime(n, prime - 1));
}

/**
 * is_prime_number - find prime number
 * @n: number
 *
 * Return: 1 if n is prime number. 0 otherwise
 */

int is_prime_number(int n)
{
	return (check_prime(n, n - 1));
}
