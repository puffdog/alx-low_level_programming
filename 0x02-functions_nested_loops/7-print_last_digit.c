#include "main.h"

/**
 * print_last_digit -  in the main.h
 * @a: is the input
 * Description: function can print last digit
 * Return: return a
 */

int print_last_digit(int a)
{
int b;
if (a < 0)
b = -1 * (a % 10);
else
b = a % 10;
_putchar((b % 10) + '0');
return (b % 10);
}
