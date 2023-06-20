i#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
	void print_alphabet_x10(void)
{
		int i;
		int j;

		for (j = 1; j <= 10; j++)
		{
			for (j = 97; j <= 122; j++)
			{
				_putchar(j);
			}
			_putchar("\n");
		}
}
