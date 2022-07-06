#include "main.h"

/**
 * _islower - is found on the main
 *@c:is the character
 *Description:describe your code
 *Return:return 1 if is correct or 0 if incorrect
 */
int _islower(int c)

{
char i;
int lower = 0;
for (i = 'a'; i <= 'z'; i++)
{
if (i == c)
lower = 1;
}
return (lower);
}
