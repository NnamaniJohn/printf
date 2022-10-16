#include "main.h"

/**
 * prt_oct - print binary
 * @num: number
 * Return: character count
 */

int prt_oct(unsigned int num)
{
	int count = 0;

	if ((num / 8) > 0)
		count += prt_oct(num / 8);
	count += _putchar((num % 8) + '0');
	return (count);
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
