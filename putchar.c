#include "main.h"

/**
 * _bputchar - writes to stdout
 * @c: character to write
 * Return: number of character writen
 */

int _bputchar(char c)
{
	static char buf[1024];
	static int i;
	int j;

	if (c == -1 || i >= 1024)
	{
		for (j = 0; j <= i; j++)
			_putchar(buf[j]);
		i = 0;
	}
	if (c != -1)
	{
		buf[i] = c;
		i++;
	}
	return (1);
}

/**
 * _putchar - writes to stdout
 * @c: character to write
 * Return: number of character writen
 */

int _putchar(char c)
{
	static char buf[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &buf, i);
		i = 0;
	}
	if (c != -1)
	{
		buf[i] = c;
		i++;
	}
	return (1);
}
