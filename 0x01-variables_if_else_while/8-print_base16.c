#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all the numbers of base 16 in lowercase,
 * followed by a new line. It uses the putchar function to print characters and
 * can only use it three times.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
			putchar('0' + i);
		else
			putchar('a' + (i - 10));
	}

	putchar('\n');
	return (0);
}

