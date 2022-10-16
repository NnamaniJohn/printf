#include "main.h"

/**
 * print_char - prints character to stdout
 * @c: character to print
 * Return: count of character
 */

int print_char(va_list c)
{
	int count = 0;

	count += _putchar(va_arg(c, int));
	return (count);
}
