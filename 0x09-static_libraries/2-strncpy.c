#include "main.h"
#include <string.h>

/**
 * _strncpy - a function that copies a string.
 *
 * @dest: A pointer to destination of string
 * @src: A pointer to source string to copy from
 * @n: A pointer to n bytes from string
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
