#include "main.h"

/**
 * print_unum - print number
 * @num: number to print
 * Return: character count
 */

int print_unum(unsigned int num)
{
	int c = 0;

	if ((num / 10) > 0)
		c += print_unum(num / 10);
	c += _putchar((num % 10) + '0');
	return (c);
}

/**
 * print_uint - prints unsigned int to stdout
 * @num: unsigned integer number
 * Return: character count
 */

int print_uint(va_list num)
{
	return (print_unum(va_arg(num, unsigned int)));
}
