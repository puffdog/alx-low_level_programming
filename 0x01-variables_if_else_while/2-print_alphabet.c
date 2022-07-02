#include <stdio.h>

#include <stdlib.h>

#include <stdtime.h>
/**
 * main - is the entry point
 * Description: determine code info
 * Return: success 0
 */
int main(void)
{
int d;
for (d = 0; d < 100; d++)
{
putchar((d / 10) + '0');
putchar((d % 10) + '0');
if (d != 99)
{
putchar(',');
putchar(' ');
}
}
putchar('\n')
return (0)
}
