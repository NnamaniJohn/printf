#include "main.h"

/**
 * prt_bin - print binary
 * @num: number
 * Return: character count
 */

int prt_bin(unsigned int num)
{
	int count = 0;

	if ((num / 2) > 0)
		count += prt_bin(num / 2);
	count += _putchar((num % 2) + '0');
	return (count);
}

/**
 * print_bin - prints binary caller function
 * @num: number
 * Return: character count
 */

int print_bin(va_list num)
{
	return (prt_bin(va_arg(num, unsigned int)));
}
