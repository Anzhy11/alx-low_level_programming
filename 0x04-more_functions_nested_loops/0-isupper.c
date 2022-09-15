#include "main.h"

/**
 * _isupper - Check main
 * @c: An input character
 * Description: function that checks for uppercase character
 * Return: 1 if is uppercase or 0 if is lowercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
