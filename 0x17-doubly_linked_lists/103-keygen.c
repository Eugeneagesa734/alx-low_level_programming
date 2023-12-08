#include <stdio.h>
#include <string.h>

/**
 * main - generates a valid key for a given username.
 * @argc: command-line arguments string array
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	char key[7];
	int i, len;

	if (argc != 2)
	{
		printf("Usage: %s username\n", argv[0]);
		return (1);
	}

	len = strlen(argv[1]);
	key[0] = argv[1][0] ^ 0x3;
	for (i = 1; i < len; i++)
		key[i] = argv[1][i] ^ argv[1][i - 1];
	key[i] = '\0';

	printf("%s\n", key);

	return (0);
}
