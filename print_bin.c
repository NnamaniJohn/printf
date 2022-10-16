#include "main.h"

/**
 * prt_bin - print binary
 * @n: number
 * Return: character count
 */

int prt_bin(int n)
{
	int c = 0;

	if ((n / 2) > 0)
		c += prt_bin(n / 2);
	c += _putchar((n % 2) + '0');
	return (c);
}

/**
 * print_bin - prints binary
 * @num: number
 * Return: int
 */

int print_bin(va_list num)
{
	return (prt_bin(va_arg(num, int)));
}
