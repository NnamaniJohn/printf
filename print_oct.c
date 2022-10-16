#include "main.h"

/**
 * prt_oct - print binary
 * @num: number
 * Return: character count
 */

int prt_oct(unsigned int num)
{
	int c = 0;

	if ((num / 8) > 0)
		c += prt_oct(num / 8);
	c += _putchar((num % 8) + '0');
	return (c);
}

/**
 * print_oct - prints binary
 * @num: number
 * Return: int
 */

int print_oct(va_list num)
{
	return (prt_oct(va_arg(num, unsigned int)));
}