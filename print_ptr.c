#include "main.h"

/**
 * print_ptr - prints a pointer
 * @a: the address to print
 * Return: character count
 */

int print_ptr(va_list a)
{
	unsigned long arg;
	unsigned int count, i;
	char *null = ("(null)");

	count = 0;
	arg = va_arg(a, unsigned int);
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
		count += print_hex(va_list arg);
	}
	return (count);
}
