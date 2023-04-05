#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - says if an integer is a prime number or not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	
	return (actual_prime(n, n - 1));
}
