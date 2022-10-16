#include "main.h"

/**
 * print_string - prints string to stdout
 * @s: string to print
 * Return: count of character
 */

int print_string(va_list s)
{
	int i, count, len;
	char *str = va_arg(s, char *);

	count = len = 0;
	while (str[len])
		len++;
	for (i = 0; i < len; i++)
	{
		count += _putchar(str[i]);
	}
	return (count);
}
