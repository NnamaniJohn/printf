#include "main.h"

/**
 * print_char - prints character to stdout
 * @c: character to print
 * @flag: flag
 * Return: count of character
 */

int print_char(va_list c, flag_t *flag)
{
	int count = 0, i;

	for (i = 0; i < flag->width - 1; i++)
		count += _putchar(' ');
	count += _putchar(va_arg(c, int));
	return (count);
}
