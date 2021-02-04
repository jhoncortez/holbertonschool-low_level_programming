#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int count;

	count = 1;
	while (count <= 2)
	{
		c = 'a';
		while (c <= 'z')
		{
			if (count == 2)
			{
				putchar(toupper(c));
			}
			else
			{
				putchar(c);
			}
			if (c == 'z')
				count++;
			c++;
		}
	}
	putchar ('\n');
	return (0);
}
