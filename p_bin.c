#include "main.h"

/**
 * p_bin - to generate binary from unsigned int for print
 *
 * Description : to divide an int by 2 tilll you get a binary digit 
 *
 * Return : -1 or binary digit
 */

int p_bin(unsigned int n)
{
	int count =0;

	while(n > 0)
	{
		ptch((int)(n % 2) + '0');
		n = n / 2;
		count++;
	}
	return (count);
}
