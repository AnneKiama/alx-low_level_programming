#include <stdio.h>

/**
 * main - Prints in lowercase apart from q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
	}

	putchar('\n');

	return (0);
}
