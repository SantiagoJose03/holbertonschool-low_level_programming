#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0'); /* Convert number to ASCII */
		if (num < 9) /* Add comma and space except for the last number */
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n'); /* New line at the end */

	return (0);
}
