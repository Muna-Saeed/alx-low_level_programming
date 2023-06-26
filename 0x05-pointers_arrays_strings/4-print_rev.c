#include <stdio.h>

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: pointer to the string to be printed
 */
void print_rev(char *s)
{
	int len = 0;
	int o;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (o = len; o > 0; o--)
	{
		putchar(*s);
		s--;
	}

	putchar('\n');
}
