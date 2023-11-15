#include "main.h"

/**
 * p_bin - to generate binary from unsigned int for print
 *
 * Description : to divide an int by 2 tilll you get a binary digit 
 *
 * Return : -1 or binary digit
 */

int p_oct(unsigned int n)
{
	int count = 0;
	int i = 0;
	int oct_holder[32];

	while(n > 0)
	{
		oct_holder[i] = n % 8;
		n = n / 8;
		i++;
		count++;
	}

	for(i = count - 1; i >= 0; i--)
	{
		ptch(oct_holder[i]+ '0');
	}
	return (count);
}
