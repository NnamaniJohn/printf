#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct flags - flag
 * @plus: +
 * @space: space
 * @hash: #
 * @lon: long
 * @sht: short
 * @width: field width
 * @zero: 0 flag
 * @minus: - flag
 * Description: contains flags
 */

typedef struct flags
{
	int plus;
	int space;
	int hash;
	int lon;
	int sht;
	int width;
	int zero;
	int minus;
	int prec;
} flag_t;

/**
 * struct format - struct to get print format according to conversion specifier
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
int print_char(va_list c, flag_t *flag);
int print_string(va_list s, flag_t *flag);
int print_int(va_list num, flag_t *flag);
int print_perc(void);
int print_bin(va_list num);
int print_uint(va_list num, flag_t *flag);
int print_oct(va_list num, flag_t *flag);
int print_hex(va_list num, flag_t *flag);
int print_shex(va_list num, flag_t *flag);
int get_ft(char format, va_list arg, flag_t *flag);
int print_sstring(va_list s);
int print_ptr(va_list a, flag_t *flag);
int _get_flg(char format, flag_t *flg);
int print_rev(va_list r);
int print_rot13(va_list r);
int _get_width(char format, flag_t *flag);
int _bputchar(char c);
int print_num(int n);
int _get_len(char format, flag_t *flg);

#endif /* MAIN_H */
