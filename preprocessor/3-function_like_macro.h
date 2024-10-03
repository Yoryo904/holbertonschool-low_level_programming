#ifndef _3_FUNCTION_LIKE_MACRO_H_
#define _3_FUNCTION_LIKE_MACRO_H_

/* Macros */

/* #define ABS(x) ((x) - (x)) ? ((x) - (x)) && ((x) < 0) ? ((x) * - 1) : ((x) < 0) ? ((x) * -1) : (x) */
#define ABS(x) (x >= 0 ? (x) : (x) * (-1))

#endif /* _3_FUNCTION_LIKE_MACRO_H_ */
