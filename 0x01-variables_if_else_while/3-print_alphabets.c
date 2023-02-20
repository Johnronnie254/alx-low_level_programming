#include <stdio.h>

/**
 * main - prints alha in lower case
 * return: Always 0
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar ('\n');
	return (0);
}
