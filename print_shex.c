#include "main.h"

/**
 * prt_shex - print hexadecimal
 * @num: number
 * Return: character count
 */

int prt_shex(unsigned int num)
{
	int c = 0;

	if ((num / 16) > 0)
		c += prt_shex(num / 16);
	if (num % 16 == 10)
		c += _putchar('a');
	else if (num % 16 == 11)
		c += _putchar('b');
	else if (num % 16 == 12)
		c += _putchar('c');
	else if (num % 16 == 13)
		c += _putchar('d');
	else if (num % 16 == 14)
		c += _putchar('e');
	else if (num % 16 == 15)
		c += _putchar('f');
	else
		c += _putchar((num % 16) + '0');
	return (c);
}

/**
 * print_shex - prints hexadecimal
 * @num: number
 * Return: int
 */

int print_shex(va_list num)
{
	return (prt_shex(va_arg(num, unsigned int)));
}
