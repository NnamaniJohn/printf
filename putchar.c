#include <unistd.h>

/**
 * _putchar - writes to stdout
 * @c: character to write
 * Return: number of character writen
 */

int _putchar(char c)
{
    return (write(1, &c, 1));
}

