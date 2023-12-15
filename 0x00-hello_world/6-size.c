#include <stdio.h>
/**
 * main - Entry level
 *
 * Description: print the size of
 *
 * Return: return 0 if success
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int e;
	float f;

	printf("Size of a char is: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int is: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long int is: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int is: %lu byte(s)\n", (unsigned long)sizeof(e));
	printf("Size of a float is: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
