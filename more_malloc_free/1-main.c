#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat;

    concat = string_nconcat("Que hace davicho", "Como esta? bien o que", 25);
    printf("%s\n", concat);
    free(concat);
    return (0);
}
