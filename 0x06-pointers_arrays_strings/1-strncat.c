#include "main.h"
#include <string.h>

/**
 * _strncat - a function that concatenates two strings.
 *
 * @dest: A pointer to destination of string
 * @src: A pointer to source string to copy from
 * @n: A pointer to n bytes from string
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
