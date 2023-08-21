#include "main.h"
/**
 * main - Test file
 */

int main(void)
{
	int count_std = 0;
	int count_hmd = 0;

	write(1, "standard\n", 10);
	count_std = printf("my name is %s\n", "Beloved");
	printf("I printed, %d characters\n", count_std);
	write(1, "self_made:\n", 11);
	count_hmd = _printf("my name is: %s\n", "Tshumelo");
	printf("\n I printed %d characters", count_hmd);
	return (0);
}
