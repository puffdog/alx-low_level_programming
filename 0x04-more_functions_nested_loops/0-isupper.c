#include "main.h"

/**
 * _isupper - is the function for upper case characters
 * @c: is a input  character
 * Description: c -isupper a input
 * Return: if is uppercase return 1
 */

int  _isupper(int c)
{
char uppercase = 'A';
int isupper = 0;
for (; uppercase <= 'Z'; uppercase++)
{
if (c == uppercase)
{
isupper = 1;
break;
}
}
return (isupper);
}



