#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * @str: pointer to the input string
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i += 2;
	}

	printf("\n");
}
