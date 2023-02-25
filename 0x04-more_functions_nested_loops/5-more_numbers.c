#include "main.h"
/**
 * print_most_numbers - print num except 2 and 4
 *
 * return: void
 */
void print_most_numbers(void)
{
	char c;
	for (c = '0'; c <= '9'; c++)
{
		if (!(c == '2' || c == '4'))
			_putchar(c);
}
	_putchar('\n');
}
#include "main.h"
/**
 * more_numbers - print more numbers
 */
void more_numbers(void)
{
	int i, j;
	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar('1');
			_putchar (j % 10 + '0');
		}
		_putchar('\n');
	}
}
