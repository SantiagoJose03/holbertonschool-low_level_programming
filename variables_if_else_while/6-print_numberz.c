#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar(digit + '0'); /* Convert integer to corresponding ASCII character */
	}
	putchar('\n'); /* Print newline */

	return (0);
}
