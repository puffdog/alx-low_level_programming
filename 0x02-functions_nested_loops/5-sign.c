#include "main.h"

/**
 * print_sign:with the lower case
 * @n:represent number
 * Description:the use of function
 * -1 if number is negative
 * Return:1 if number is positive or 0 if negative
 */

int print_sign(int n)

{

int value;

if (n > 0)
{
value = 1;
_putchar('+');
}
else if (n == 0)
{
value = 0;
_putchar('0');
}
else
{
value = -1;
_putchar('-');
}
return (value);


}
