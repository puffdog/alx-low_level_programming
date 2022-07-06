#include "main.h"

/**
 * print_sign:with the lower case
 * @n:represent number
 * Description:describe the code
 * Return:1 if is true or 0 if false
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
