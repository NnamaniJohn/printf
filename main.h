#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct format - struct
 * @format: format
 * @func: function
 * Description: contains the type and the format to print.
 */
typedef struct format
{
	char format;
	int (*func)();
} format_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list c);
int print_string(va_list s);
int print_int(va_list num);
int print_perc(void);
int print_bin(va_list num);
int print_uint(va_list num);
int print_oct(va_list num);
int print_hex(va_list num);
int print_shex(va_list num);
int get_ft(char format, va_list arg);
int print_sstring(va_list s);
int print_ptr(va_list a);
int print_rev(va_list r);
int print_rot13(va_list r);

#endif /* MAIN_H */
