#include <stdio.h>

/**
 * main - Read Alphabet
 *
 * Return: 0 (executed)
 */
int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar (alpha[i]);
		putchar('\n');
	}
return (0);
}
