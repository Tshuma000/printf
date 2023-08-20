#include "main.h"

/**
 * main - test file
 * program starts execution from here
 *
 * Return: always 0
*/

int main(void)
{
	int count_std = 0;
	int count_hmd = 0;

	write(1, "STANDARD:\n", 10);
	count_std = printf("My name is: %s\n", "ch");
	printf("i printed %d characters\n", count_std);
	write(1, "SELF_MADE:\n", 11);

	count_hmd = _printf("My name is: %i\n", 10);
	printf("\ni printed %d characters", count_hmd);

	return (0);
}
