#include <unistd.h>

/**
 *__putchar -writes the character cto stdout
 * @c: The character to print
 *
 * Return: on success 1.
 * on error,-1 returned, and error no is set appropriately .
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
