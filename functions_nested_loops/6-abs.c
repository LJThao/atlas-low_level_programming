#include "main.h"

/**
 * _abs - computes the absolute value
 * @c: The num to be calculated
 * Return: Absolute of num or 0
 */

int _abs(int c)

{
	if (c < 0 )
   	{
	       	int abs_val;
      		abs_val= c * -1;
		return (abs_val);
	}
	return (c);

}
