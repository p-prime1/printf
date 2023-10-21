#include "main.h"

/**
 * print_string - Prints string
 * @s: Pointer t string
 * Return: length of sting
 */

int print_string(const char *s)
{
	int i, k;

	i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
		k = strlen(s);
	}
	return (k);
}
