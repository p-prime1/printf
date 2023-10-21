#include "main.h"

/**
 * print_int - Print int
 * @num: number to be pritned
 * Return: Number of chars printed
 */
int print_int(int num)
{
	int k;

	if (num < 0)
	{
		putchar('-');
	}
	num = (-1) * (num);
	while (num >= 10)
	{
		k = num /= 10;
		putchar(k + '0');
	}
	return (0);
}


