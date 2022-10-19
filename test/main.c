#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%.5d, %+i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%+d]\n", -63889);
    printf("Negative:[%ld]\n", -63889);
    _printf("Unsigned:[%+u]\n", ui);
    printf("Unsigned:[%+u]\n", ui);
    _printf("Unsigned octal:[%#o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%#x, %#X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%3c]\n", 'H');
    printf("Character:[%3c]\n", 'H');
    len = _printf("String:[%20s]\n", "I am a string !");
    len2 = printf("String:[%20s]\n", "I am a string !");
    if (len == len2)
	    printf("same\n");
    _printf("Address:[%20p]\n", addr);
    printf("Address:[%20p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    len = _printf("\n");
    _printf("%4+d\n", 67);
    return (0);
}
