#include "main.h"
/**
 *jack_bauer - is the main point
 * Description: describe code
 * Return: 0 if its true
 */

void jack_bauer(void)
{
int P, D;
for (P = 0; P < 24; P++)
{
for (D = 0; D < 60; D++)
{
_putchar((P / 10) + '0');
_putchar((P % 10) + '0');
_putchar(':');
_putchar((D / 10) + '0');
_putchar((D % 10) + '0');
_putchar('\n');
}
}
}
