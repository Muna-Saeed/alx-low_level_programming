#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * generate_key - Generates a key based on the username.
 * @username: The username.
 * @key: The generated key.
 */
void generate_key(char *username, char *key)
{
	int i;
	int length = strlen(username);

	for (i = 0; i < length; i++)
	{
		key[i] = username[i] ^ 0x17;
	}

	key[length] = '\0';
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	char *username;
	char key[256];

	if (argc != 2)
	{
		printf("Usage: %s <username>\n", argv[0]);
		return (1);
	}

	username = argv[1];

	generate_key(username, key);

	printf("%s\n", key);

	return (0);
}
