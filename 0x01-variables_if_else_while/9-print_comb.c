#include <stdio.h>
/**
 * main - C program to print possible combinations of single digit numbers
 *
 * Return: Always(0)
 *
 */
int main(void)
{
	int i = 0;

	while (i < 8)
	{
		int j = i + 1;

		while (j < 10)
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
			putchar(i + '0');
			if (i == 8 && j == 9)
				break;
			putchar(',');
			putchar(' ');
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
