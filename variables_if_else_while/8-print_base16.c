#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	/* Print numbers 0-9 */
	for (digit = 0; digit < 10; digit++)
	{
		putchar(digit + '0'); /* Convert integer to ASCII */
	}

	/* Print letters a-f */
	for (digit = 0; digit < 6; digit++)
	{
		putchar(digit + 'a'); /* Offset to ASCII letters */
	}

	/* Print newline */
	putchar('\n');

	return (0);
}
