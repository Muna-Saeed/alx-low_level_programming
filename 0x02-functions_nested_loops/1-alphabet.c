#include "main.h"
#include <unistd.h>
  /**
    * main - entry point
    * print_alphabet - print all alphabet in lowercase
    * Return: returns 0 to indicate a successful execution
  */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

