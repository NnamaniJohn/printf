#ifndef MAIN_H
#define MAIN_H

/**
 * struct ft - struct
 * @f: format
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

#endif /* MAIN_H */
