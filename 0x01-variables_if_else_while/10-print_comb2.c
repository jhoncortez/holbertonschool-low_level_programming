#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int d1 = 0, d2 = 0;

	while (d1 < 10)
	{
		d2 = 0;
		while (d2 < 10)
		{
			putchar(d1 % 10 + '0');
			putchar(d2 % 10 + '0');
			if (!(d1 == 9 && d2 == 9))
			{
				putchar(',');
				putchar(' ');
			}
			d2++;
		}
		d1++;
	}
	putchar('\n');
	return (0);
}
