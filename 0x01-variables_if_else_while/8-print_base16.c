#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n = 0;
	char c;
	int crunner=0;

	c='a';
	while (n < 16)
	{
		if (n >= 10)
		{
			putchar(c+crunner);
			crunner++;
		}
		else
		{
			putchar(n + '0');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
