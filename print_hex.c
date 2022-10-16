#include "main.h"

/**
 * prt_hex - print hexadecimal
 * @num: number
 * Return: character count
 */

int prt_hex(unsigned int num)
{
	int c = 0;

	if ((num / 16) > 0)
		c += prt_hex(num / 16);
	if (num % 16 == 10)
		c += _putchar('A');
	else if (num % 16 == 11)
		c += _putchar('B');
	else if (num % 16 == 12)
		c += _putchar('C');
	else if (num % 16 == 13)
		c += _putchar('D');
	else if (num % 16 == 14)
		c += _putchar('E');
	else if (num % 16 == 15)
		c += _putchar('F');
	else
		c += _putchar((num % 16) + '0');
	return (c);
}

/**
 * print_hex - prints hexadecimal
 * @num: number
 * Return: int
 */

int print_hex(va_list num)
{
	return (prt_hex(va_arg(num, unsigned int)));
}
