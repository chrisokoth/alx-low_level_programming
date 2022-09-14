#include "main.h"

/**
 * _isalpha - Return 1 is c is a letter. lowercase or uppercase
 *
 * @c; The int to print
 * A function that checks for alphabetic character.
 * Return: Always 0.
 */

int _isalpha(int c)
/**
 * _isalpha checks for alphebetic character
 * Return: Always 0
 */
{
	

	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{

		return (1);
	}

	else
	{
		return (0);
	}

}
