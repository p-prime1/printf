#include "main.h"

int print_string(const char *s)
{
	int i,k;

	i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
		k++;
	}
	return (k);
}
