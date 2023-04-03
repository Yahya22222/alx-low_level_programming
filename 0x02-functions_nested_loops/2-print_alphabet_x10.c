#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    char letter = 'a'; /* Initialize the letter to 'a' */

	for (int i = 0; i < 10; i++) /* Loop 10 times */
	{
		for (int j = 0; j < 26; j++) /* Loop 26 times to print the alphabet */
		{
			_putchar(letter); /* Print the current letter */
			letter++; /* Move to the next letter */
		}
		letter = 'a'; /* Reset the letter to 'a' */
		_putchar('\n'); /* Move to the next line */
	}
}
    return (0);
}
