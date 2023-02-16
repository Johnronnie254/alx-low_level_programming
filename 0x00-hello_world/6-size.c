#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Size is not grandeur, and territory does not make a nation'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("size of a int b: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("size of c long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("size of d long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("size of f float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
