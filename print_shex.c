#include "main.h"

/**
 * prt_shex - print hexadecimal
 * @num: number
 * Return: character count
 */

int prt_shex(unsigned int num)
{
	int count = 0;

	if ((num / 16) > 0)
		count += prt_shex(num / 16);
	if (num % 16 == 10)
		count += _putchar('a');
	else if (num % 16 == 11)
		count += _putchar('b');
	else if (num % 16 == 12)
		count += _putchar('c');
	else if (num % 16 == 13)
		count += _putchar('d');
	else if (num % 16 == 14)
		count += _putchar('e');
	else if (num % 16 == 15)
		count += _putchar('f');
	else
		count += _putchar((num % 16) + '0');
	return (count);
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
