<<<<<<< HEAD
#include <main.h>
=======
>>>>>>> 831e8865d79ab07023d3d956cd1f9654833a1b14
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
