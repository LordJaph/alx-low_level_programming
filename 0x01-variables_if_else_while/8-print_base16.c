#include <stdio.h>
/**
 * main - main function
 * Return: always 0
 */
int main(void)
{
	int number;

	char alphabet;

	for (number = 0; number < 10; number++)
		putchar(number + '0');
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
	putchar(alphabet);
	putchar('\n');
	return (0);
}
