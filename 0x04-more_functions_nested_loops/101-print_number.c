#include "main.h"
void print_integer(int d);

/*
 * print_number - prints numbersi is afunction
 * print_integer - is another number
 * @n: is input
 * Return: success 0
 */

void print_number(int n)
{
if (n == 0)
_putchar('0');
else if (n < 0)
{
_putchar('-');
print_integer(n * -1);
}
else
print_integer(n);
}

/**
 * print_integer - is the main
 * @d: an unsigned value
 * Return: success 0
 */
void print_integer(int d)
{
int i = 1000000000;
for (; i >= 1; i /= 10)
if (d / i != 0)
{
_putchar((d / i) % 10 + '0');
}
}
