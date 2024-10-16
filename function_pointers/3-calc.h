#ifndef _CALC_H_
#define _CALC_H_

/* libraries */
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

/* structures */

/**
 * struct op - Struct op
 *
 *@op: the operator
 *@f: the function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/* prototypes */

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif /* _CALC_H_ */
