#include "main.h"

/**
 * print_num - print number
 * @n: number to print
 * Return: character count
 */

int print_num(int n)
{
	unsigned int num = n;
	int c = 0;

	if (n < 0)
	{
		c += _putchar('-');
		num = -num;
	}
	if ((num / 10) > 0)
		c += print_num(num / 10);
	c += _putchar((num % 10) + '0');
	return (c);
}

/**
 * print_int - prints int to stdout
 * @num: integer number
 * Return: character count
 */

int print_int(va_list num)
{
	return (print_num(va_arg(num, int)));
}
