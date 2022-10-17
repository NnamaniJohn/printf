#include "main.h"

/**
 * print_rot13 - prints a string in rot13
 * @r: argument list
 * Return: character count
 */

int print_rot13(va_list r)
{
	unsigned int i, j, count;
	char *str;
	int printed;
	char prev_char[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char hash_char[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(r, char *);

	if (!str)
		str = ("(ahyy)");
	for (i = 0; str[i]; i++)
	{
		printed = 0;
		for (j = 0; prev_char[j]; j++)
		{
			if (str[i] == prev_char[j])
			{
				count += _putchar(hash_char[j]);
				printed = 1;
				break;
			}

		}
		if (printed == 0 || !prev_char[j])
			count += _putchar(str[i]);
	}
	return (count);
}
