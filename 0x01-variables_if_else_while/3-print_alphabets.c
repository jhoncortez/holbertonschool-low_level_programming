#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c, uc;

	c = 'a';
	uc = 'A';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (uc <= 'Z')
	{
		putchar(uc);
		uc++;
	}
	putchar ('\n');
	return (0);
}
