#include <stdio.h>
/**
 * main - my entry point
 * Description: prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	char a;
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar('0' + number);
		}
	putchar('\n');
	return (0);
}
