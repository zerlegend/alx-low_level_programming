#include <stdio.h>
/**
* main - main block, the prograam should prints the size of various types
* Return: 0
*/
int main(void)
{
	printf("Size of an int: %i byte(s)\n", sizeof(int));
	printf("Size of a float: %i byte(s)\n", sizeof(float));
	printf("Size of a char: %i byte(s)\n", sizeof(char));
	printf("Size of a double: %i byte(s)\n", sizeof(double));
	return (0);
}
