#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @r: argument list
 * Return: character count
 */

int print_rev(va_list r)
{
	int count, i;
	char *str;

	i = count = 0;
	str = va_arg(r, char *);

	if (str == NULL)
		str = ")llun(";
	for (i = 0; str[i]; i++)
		;
	for (--i; i >= 0; i--)
		count += _putchar(str[i]);
	return (count);
}
