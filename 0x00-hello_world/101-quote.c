#include <stdio.h>
#include <unistd.h>
/**
 * main - function simply prints to the console using the write function then
 * Return: returns 1 to indicate a successful execution
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
