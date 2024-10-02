#include <stdio.h>
#include <stdlib.h>
#define SQUARE(float, (a)) 1 / 2 * ((a * 2) + (2 * a))

int main(int argc, char *argv[])
{
	int num = 0;

	/* ./Square 1 */
	if (argc != 2)
	{
		printf("usage: ./Square <num>\n");
		return (1);
	}

	num = atoi(argv[1]);

	printf("La raiz cuadrada de %d es: %d\n", num, SQUARE(num));

	return (0);
}
