#include <stdlib.h>

#include <time.h>

/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("the number is positive\n %d");
}
else if (n == 0)
{
printf("the number is zero\n %d");
}
else
{
printf("the number is negative\n %d");
}
/* your code goes there */
return (0);
}
