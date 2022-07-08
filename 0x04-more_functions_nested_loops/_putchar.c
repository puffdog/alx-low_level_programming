#include <unistd.h>

/**
 * main - is the entry point 
 * @c: is char to display
 * Return: 1 0r -1 
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
