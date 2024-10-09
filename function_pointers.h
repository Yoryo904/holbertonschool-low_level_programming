#ifndef _FUNCTION_POINTERS_H_ 
#define _FUNCTION_POINTERS_H_

/* libraries */
#include <stdio.h>
#include <stdlib.h>

/* prototypes */
void print_name(char *name, void (*f)(char *));
int _putchar(char c);

#endif /*_FUNCTION_POINTERS_H_*/
