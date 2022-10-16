#include "main.h"

/**
 * prt_bin - print binary
 * @n: number
 * Return: character count
 */

int prt_bin(int n)
{
	unsigned int num = n;
	int c = 0;

	if (n < 0)
	{
		c += _putchar('-');
		num = -num;
	}

	if ((num / 2) > 0)
		c += prt_bin(num / 2);
	c += _putchar((num % 2) + '0');
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
