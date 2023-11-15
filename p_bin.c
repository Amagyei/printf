#include "main.h"

/**
 * p_bin - to generate binary from unsigned int for print
 *
 * Description : to divide an int by 2 tilll you get a binary digit 
 *
 * Return : -1 or binary digit
 */

int p_bin(int n)
{
	int i = 0;
	int bin_holder[32];

	while(n > 1)
	{
		bin_holder[i] = (n % 2);
		i++;
	}
	return (p_uint(bin_holder[32]));
}
