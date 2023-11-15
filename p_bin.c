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
	int i = 0;
	int *binary_holder = (int *)malloc(count * sizeof(int));


	while(n > 0)
	{
		binary_holder[i] = n % 2;
		n = n / 2;
		i++;
		count++;
	}

	for(i = count - 1; i >= 0; i--)
	{
		ptch(binary_holder[i]+ '0');
	}
	return (count);
}
