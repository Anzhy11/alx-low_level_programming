#include "main.h"

/**
 * _isdigit - Check main
 * @c: An input character
 * Description: function that checks for a digit
 * Return: 1 or 0 in otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
