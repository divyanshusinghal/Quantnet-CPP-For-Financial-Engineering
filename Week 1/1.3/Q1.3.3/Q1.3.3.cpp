/* Operators */
#include <stdio.h>

int main()
{
	int x;

	x = -3 + 4 * 5 - 6;
	printf("x=%d\n", x); //x = 11 (expected output)

	x = 3 + 4 % 5 - 6;
	printf("x=%d\n", x); //x = 1 (expected output)

	x = -3 * 4 % -6 / 5;
	printf("x=%d\n", x); //x = 0 (expected output)


	x = (7 + 6) % 5 / 2;
	printf("x=%d\n", x);//x = 1 (expected output)

	return 0;
}
