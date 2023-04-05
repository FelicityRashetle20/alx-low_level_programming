#include <unistd.h>
/**
 *_putchar is a function that  writes the character c to stdout
 *@c: The character to print
 *Return: 1 if successful and -1 in the event of an error
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
