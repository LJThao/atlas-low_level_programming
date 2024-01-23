#include "main.h"

/**
 * _isalpha - Checks for alphabet character
 * @c: The letter to be checked
 * Return: 1 for corrct char of 0 for anthing else
 */

int _isalpha(int c)

{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))

	{
		return (1);

	}
       
	return (0);

}
