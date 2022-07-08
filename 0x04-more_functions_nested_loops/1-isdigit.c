#include "main.h"

/**
 * _isdigit - is the main
 * @c: is input
 * Return: return 1 if success or 0 if not
 */

int _isdigit(int c)
{
char i = '0';
int isdigit = 0;
for (; i <= '9'; i++)
{
if (i == c)
{
isdigit = 1;
break;
}
}
return (isdigit);

}
