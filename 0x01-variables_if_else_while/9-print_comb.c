#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - is the entry point
 * Description:does it all
 * Return:success 0
 */
int main(void)
{
int m;
for (m = '0'; m <= '9'; m++)
{
putchar(m);
if (m != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
