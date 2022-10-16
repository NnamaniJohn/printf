#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct valid_data_types - structure to call function for
 * valid data types
 *
 * @specifier: conversion specifier which are preceded by '%', e.g %d
 * @fptr: pointer to function to print argument w.r.t valid data types
 */
typedef struct valid_data_types
{
	char *specifier;
	int (*fptr)(va_list);
} call;


int _putchar(char c);
int _printf(const char *format, ...);
#endif /* MAIN_H */
