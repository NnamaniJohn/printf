#include "main.h"

/**
 * _prt_hex - print hexadecimal
 * @num: number
 * Return: character count
 */

int _prt_hex(unsigned long int num)
{
	int count = 0;

	if ((num / 16) > 0)
		count += _prt_hex(num / 16);
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
 * print_ptr - prints a pointer
 * @a: the address to print
 * Return: character count
 */

int print_ptr(va_list a)
{
	unsigned long int arg;
	unsigned int count, i;
	char *null = ("(nil)");

	count = 0;
	arg = va_arg(a, unsigned long int);
	if (!arg)
	{
		for (i = 0; null[i]; i++)
			count += _putchar(null[i]);
	}
	else
	{
		_putchar('0');
		_putchar('x');
		count += 2;
		count += _prt_hex(arg);
	}
	return (count);
}
