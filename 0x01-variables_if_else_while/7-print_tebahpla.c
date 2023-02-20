#include <stdio.h>

/**
 * main - print the lowercase in the alphabets
 * Return: Always 0
 */
int main(void)
{
	char le;

	for (le = 'z'; le >= '0'; le--)
		putchar(le);

	putchar('\n');

	return (0);
}
