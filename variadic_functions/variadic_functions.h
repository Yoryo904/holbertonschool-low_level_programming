#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

/* libraries */
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/* structures */

typedef struct print_type_struct
{
	char character;
	void (*function)(va_list);
} print_type_struct_t;

/* prototypes */
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list arguments);
void print_int(va_list arguments);
void print_float(va_list arguments);
void print_string(va_list arguments);
#endif /* _VARIADIC_FUNCTIONS_H_ */

