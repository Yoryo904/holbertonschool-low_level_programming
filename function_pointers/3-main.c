#include "3-calc.h"

/**
 *
 *
 */

int main(int argc, char *argv[])
{
	int num1 = 0;
	int num2 = 0;
	char *operator = NULL;
	int (*getFunction)(int, int) = NULL;

	/* ./calc num1 operator num2 */

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	
	
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	
	if (
		strcmp(operator, "+") != 0 &&
		strcmp(operator, "-") != 0 &&
		strcmp(operator, "*") != 0 &&
		strcmp(operator, "/") != 0 &&
		strcmp(operator, "%") != 0
	)
	{
		printf("Error\n");
		exit(99); 
	}

	if (num2 == 0 && (strcmp(operator, "/") == 0 || strcmp(operator, "%") == 0))
	{
		printf("Error\n");
		exit(100);
	}

	getFunction = get_op_func(operator);

	printf("%d\n", getFunction(num1, num2));
	return (0);
}
