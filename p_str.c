#include "main.h"

/* p_str - print strings
 *
 * Description : 'iterate through a string printing each character
 *
 * Return : '-1 or count'
 */

int p_str(char *s)
{
	int count = 0;
	
	while(*s)
	{
		if(ptch(*s) == -1)
			return count = -1;
		count++;
		s++;
	}
	return count;
}
