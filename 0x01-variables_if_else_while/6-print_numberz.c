#include <stdio.h>
/**
 * main - main function
 * Return: always 0
 */
int main(void)
{
	int numberz;

	for (numberz = 0 ; numberz < 10 ; numberz++)
		putchar(numberz + '0');
	putchar('\n');
	return (0);
}
