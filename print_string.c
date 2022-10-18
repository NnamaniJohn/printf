#include "main.h"

/**
 * print_string - prints string to stdout
 * @s: string to print
 * Return: count of character
 */

int print_string(va_list s, flag_t *flag)
{
	int i, count, len, width;
	char *str = va_arg(s, char *);

	count = len = 0;
	if (str == NULL)
		str = ("(null)");
	while (str[len])
		len++;
	width = len;
	for (i = 0; i < flag->width - width; i++)
		count += _putchar(' ');
	for (i = 0; i < len; i++)
	{
		count += _putchar(str[i]);
	}
	return (count);
}
