#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - is the entry point
 * 
 * Return: anything 0
 */
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("the number is positive %d\n", n);
}
else if (n == 0)
{
printf("the number is zero %d\n", n);
}
else
{
printf("the number is negative %d\n", n);
}
/* your code goes there */
return (0);
}
